#include "lists.h"
/**
 * list_len - numbers of links in linked lists
 * @h: pointer for head of node
 *
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	int rtrn = 0;
	const list_t *tmprry;

	tmprry = h;
	while (tmprry != NULL)
	{
		tmprry = tmprry->next;
		rtrn++;
	}

	return (rtrn);
}
