#include "lists.h"
/**
 * insert_nodeint_at_index - insert  new node in  linked list,
 * at given position
 * @head: pointer of  first node in linked list
 * @idx: index where the new node is add
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z;
	listint_t *newn;
	listint_t *tempory = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn || !head)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}

	for (z = 0; tempory && z < idx; z++)
	{
		if (z == idx - 1)
		{
			newn->next = tempory->next;
			tempory->next = newn;
			return (newn);
		}
		else
			tempory = tempory->next;
	}

	return (NULL);
}
