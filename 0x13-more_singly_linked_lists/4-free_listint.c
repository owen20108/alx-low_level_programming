#include "lists.h"
/**
 * free_listint - free  linked list
 * @head: pointer for the head
 */
void free_listint(listint_t *head)
{
	listint_t *recent = head;
	listint_t *next;

	while (recent != NULL)
	{
		next = recent->next;

		free(recent);
		recent = next;
	}
}
