#include "lists.h"

/**
 * print_list - print elements of linked list
 * @h: pointer to linked list
 *
 * Return:number of node
 */
size_t print_list(const list_t *h)
{
	int rtrn;

	if (h == NULL)
		return (0);
	for (rtrn = 1; h->next != NULL; rtrn++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (rtrn);
}
