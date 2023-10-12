#include "lists.h"

/**
 * dlistint_len - find  size  linked list
 * @h:  first element in the linked list
 * Return: the size of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int sizel = 0;

	while (h)
	{
		sizel++;
		h = h->next;
	}
	return (sizel);
}
