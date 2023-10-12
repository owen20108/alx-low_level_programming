#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print  element  double linked list
 * @h: head the linked list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int sizel = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sizel++;
	}
	return (sizel);
}
