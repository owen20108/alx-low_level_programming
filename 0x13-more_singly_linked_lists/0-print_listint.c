#include "lists.h"
/**
 * print_listint - prints all the elements of the linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t Number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		Number++;
		h = h->next;
	}

	return (Number);
}
