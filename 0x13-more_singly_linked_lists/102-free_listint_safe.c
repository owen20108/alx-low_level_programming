#include "lists.h"

/**
 * free_listint_safe - free  linked lists
 * @h: pointer to 1st node for the linked list
 *
 * Return: number of elements in the free linked list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lngth = 0;
	int dfrnt;
	listint_t *tmprry;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dfrnt = *h - (*h)->next;
		if (dfrnt > 0)
		{
			tmprry = (*h)->next;
			free(*h);
			*h = tmprry;
			lngth++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lngth++;
			break;
		}
	}

	*h = NULL;

	return (lngth);
}
