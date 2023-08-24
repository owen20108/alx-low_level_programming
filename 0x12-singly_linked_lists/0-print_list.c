#include "lists.h"
/**
 * print_list - print elements of the node
 * @h: pointer for  head of node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	 int itrtr = 0;

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
		itrtr++;
		h = h->next;
	}
	return (itrtr);
}
