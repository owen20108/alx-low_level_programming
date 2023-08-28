#include "lists.h"
/**
* print_listint - print all element for linked list
* @h: head of linked list
*
* Return: Number of linked list
*/
size_t print_listint(const listint_t *h)
{
	int nodz = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodz++;
	}
	return (nodz);
}
