#include "lists.h"

/**
 * print_list - print elements of linked list
 * @h: pointer to linked list
 *
 * Return:number of node
 */
size_t print_list(const list_t *h)
{
	size_t acounter= 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		acounter++;
	}
	return (acounter);
}
