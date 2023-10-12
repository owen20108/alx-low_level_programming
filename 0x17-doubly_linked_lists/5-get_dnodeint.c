#include "lists.h"

/**
 * get_dnodeint_at_index - get  nth from  dlinked list
 * @head: head of the list
 * @index: integer to find
 *
 * Return: none
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tempory;
	unsigned int Node_Data = 0;

	if (head == NULL)
		return (NULL);
	tempory = head;

	while (tempory != NULL)
	{
		if (Node_Data == index)
		{
			return (tempory);
		}
		Node_Data++;
		tempory = tempory->next;
	} return (NULL);
}
