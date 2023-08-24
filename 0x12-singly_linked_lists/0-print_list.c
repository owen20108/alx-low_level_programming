#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements of linked list
 * @h: pointer to linked list
 *
 * Return:number of node
 */
size_t print_list(const list_t *h)
{
	size_t sze = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sze++;
	}

	return (sze);
}
