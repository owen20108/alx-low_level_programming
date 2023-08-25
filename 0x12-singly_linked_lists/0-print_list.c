#include "lists.h"

/**
 * print_list - print elements of linked list
 * @h: pointer to linked list
 *
 * Return:number of node
 */
size_t print_list(const list_t *h)
{
	unsigned int itrtor = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		itrtor++;
		h = h->next;
	}
	return (itrtor);
}
