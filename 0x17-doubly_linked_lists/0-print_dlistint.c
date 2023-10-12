#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print elements a dlistint_t list.
 * @h: head  doubly linked list
 * Return:  number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pntr = h;
	size_t n = 0;

	while (pntr && pntr->prev)
		pntr = pntr->prev;
	while (pntr)
	{
		printf("%d\n", pntr->n);
		n++;
		pntr = pntr->next;
	}
	return (n);
}
