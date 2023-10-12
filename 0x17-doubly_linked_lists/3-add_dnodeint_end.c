#include "lists.h"

/**
 * add_dnodeint_end - add  node in the end
 * @head: the head of the linked list
 * @n: number  new node
 * Return:  address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *New_node = NULL, *tempory = NULL;

	if (head == NULL)
		return (NULL);
	New_node = malloc(sizeof(dlistint_t));

	if (New_node == NULL)
		return (NULL);
	tempory = *head;
	New_node->n = n;
	New_node->prev = NULL;
	New_node->next = NULL;

	if (*head == NULL)
	{
		*head = New_node;
		return (*head);
	}
	while (tempory->next != NULL)
		tempory = tempory->next;
	tempory->next = New_node;
	New_node->prev = tempory;
	return (New_node);
}
