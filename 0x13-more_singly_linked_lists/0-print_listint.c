#include "lists.h"
/**
* function that prints all the elements of a listint_t list
* @h: head of the list
*
* Return: The NumberOFNodesber of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t NumberOFNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		NumberOFNodes++;
		h = h->next;
	}

	return (NumberOFNodes);
}
