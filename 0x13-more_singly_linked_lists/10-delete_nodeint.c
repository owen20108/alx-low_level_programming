#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at linked list
 * @head: pointer for head
 * @index: index location
 *
 * Return: 1 for succees otherwise -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int itrtr = 0;
	listint_t *recent = *head;
	listint_t *next;

	while (itrtr < (index - 1))
	{
		if (index == 0)
			break;
		recent = recent->next;
		itrtr++;
	}
	if (recent == NULL && index != 0)
		return (-1);
	if (index == 0)
	{
		*head = recent->next;
		free(recent);
		return (1);
	}
	next = recent->next->next;
	free(recent->next);
	recent->next = next;
	return (1);
}
