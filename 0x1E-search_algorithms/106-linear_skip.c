#include "search_algos.h"

/**
 * linear_skip - Searches for a value contained in a skip list.
 * Assumes a list with sorted values and a single skip layer with nodes
 * at every index which is a multiple of the square root of the size of the list.
 *
 * @list: Pointer to the head of the skip list to traverse.
 * @value: Value to search for.
 *
 * Return: Pointer on the first node where the value is located,
 *         or NULL if the list is NULL or the value is not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *stop = NULL;

	/* Check if the list is NULL */
	if (!list)
		return (NULL);

	/* Traverse the express lane until reaching a potential range for the value */
	temp = list;
	while (temp && temp->express && temp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temp->express->index, temp->express->n);
		temp = temp->express;
	}
	stop = temp;

	while (stop && stop->next != stop->express)
		stop = stop->next;

	/* Value potentially lies between two express nodes */
	if (temp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temp->express->index, temp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temp->index, temp->express->index);
	}
	/* Value is greater than the last express node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temp->index, stop->index);

	/* Continue the search in the regular lane within the identified range */
	while (temp != stop && temp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       temp->index, temp->n);

	/* If the search reached the end and no match was found, return NULL */
	if (temp == stop)
		return (NULL);

	/* Return a pointer to the first node where the value is located */
	return (temp);
}

