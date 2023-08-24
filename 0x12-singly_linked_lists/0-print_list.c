#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements of linked list
 * @h: pointer to linked list
 *
 * Return:number of node
 */
size_t print_list(const list_t *h)
{
	int rtrn = 0;
	list_t *tmprry;

	tmprry = (list_t *)h;
	while (tmprry != NULL)
	{
		if (tmprry->str == NULL)
		{
			printf("[0] (nil)\n");
			tmprry = tmprry->next;
			rtrn++;
		}
		printf("[%u] %s\n", tmprry->len, tmprry->str);
		tmprry = tmprry->next;
		rtrn++;
	}
	return (rtrn);
}
