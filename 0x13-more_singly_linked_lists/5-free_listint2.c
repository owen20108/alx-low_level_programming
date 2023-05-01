#include "lists.h"
/**
 * free_listint2 - free  linked list
 * @head: pointer for  listint_t list to be free
 */
void free_listint2(listint_t **head)
{
	listint_t *tempory;

	if (head == NULL)
		return;

	while (*head)
	{
		tempory = (*head)->next;
		free(*head);
		*head = tempory;
	}

	*head = NULL;
}
