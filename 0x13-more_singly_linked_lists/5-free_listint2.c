#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: two pointers for the head
 */
void free_listint2(listint_t **head)
{
	listint_t *recent;
	listint_t *next;

	if (head == NULL)
		return;
	recent = *head;
	while (recent != NULL)
	{
		next = recent->next;
		if (recent != NULL)
			free(recent);
		recent = next;
	}
	*head = NULL;
}
