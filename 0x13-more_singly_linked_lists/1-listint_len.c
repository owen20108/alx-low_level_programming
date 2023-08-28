#include "lists.h"
/**
* listint_len - number of linked list of integer
* @h: head of the linked list
*
* Return: Number of linked list
*/
size_t listint_len(const listint_t *h)
{
	int nodz = 0;

	while (h)
	{
		h = h->next;
		nodz++;
	}
	return (nodz);
}
