#include "lists.h"
/**
* function that prints all the elements of a listint_t list by ahmed khalil
* @h: head of the list
*
* Return: The Number of nodes
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
