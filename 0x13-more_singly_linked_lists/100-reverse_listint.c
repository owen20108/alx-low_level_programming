#include "lists.h"
/**
 * reverse_listint - reverse  linked list
 * @head: pointer of first node  list
 * Return: pointer of first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnd = NULL;
	listint_t *nextnd = NULL;

	while (*head)
	{
		nextndnd = (*head)->nextnd;
		(*head)->nextnd = prevnd;
		prevnd = *head;
		*head = nextnd;
	}

	*head = prevnd;

	return (*head);
}
