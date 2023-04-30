#include "lists.h"
/**
 * listint_len - return  number  elements in  linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t Number = 0;

	while (h)
	{
		Number++;
		h = h->next;
	}

	return (Number);
}

