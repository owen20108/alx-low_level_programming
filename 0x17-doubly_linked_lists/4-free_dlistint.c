#include "lists.h"

/**
 * free_dlistint - free double linked list
 * @head: header
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempory;

	tempory = head;
	while (head !=  NULL)
	{
		tempory = head;
		head = head->next;
		free(tempory);
	} free(head);
}
