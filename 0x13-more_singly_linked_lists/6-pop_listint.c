#include "lists.h"
/**
 * pop_listint - delete the head node of the  linked list
 * @head: pointer of the first element in  linked list
 * Return:  the head node’s data (n)
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tempory;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tempory = (*head)->next;
	free(*head);
	*head = tempory;

	return (number);
}

