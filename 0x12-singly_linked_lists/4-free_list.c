#include "lists.h"
/**
 * free_list - free linked list
 * @head: pointer for head
 */
void free_list(list_t *head)
{
	list_t *currentnode = head;
	list_t *next;

	while (currentnode != NULL)
	{
		next = currentnode->next;
		free(currentnode->str);
		free(currentnode);
		currentnode = next;
	}
}
