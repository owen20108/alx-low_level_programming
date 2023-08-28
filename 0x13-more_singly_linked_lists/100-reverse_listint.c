#include "lists.h"

/**
 * reverse_listint - reverse order for linked list
 * @head: start of linked list
 * Return: head of linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prvus = NULL;
	listint_t *nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = prvus;
		prvus = *head;
		*head = nxt;
	}
	*head = prvus;
	return (*head);
}
