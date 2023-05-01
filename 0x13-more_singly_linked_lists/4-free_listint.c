#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: listint_t list  that free
 */
void free_listint(listint_t *head)
{
	listint_t *tempry;

	while (head)
	{
		temp = head->next;
		free(head);
		head = tempry;
	}
}
