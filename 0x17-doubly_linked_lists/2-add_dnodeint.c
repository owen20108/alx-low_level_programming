#include "lists.h"

/**
 * add_dnodeint - add  node at the begin
 * @head:  head of the linked list
 * @n:  number to be add
 * Return:  address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *New_node = NULL;

	if (head == NULL)
		return (NULL);
	New_node = malloc(sizeof(New_node));

	if (New_node == NULL)
		return (NULL);

	New_node->n = n;
	New_node->next = *head;
	New_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = New_node;
	*head = New_node;
	return (New_node);
}
