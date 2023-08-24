#include "lists.h"
/**
 * print_list - print elements of the list
 * @h: pointer to the head of node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int rtrn = 0;
	list_t *tmpry;

	tmpry = (list_t *)h;
	while (tmpry != NULL)
	{
		if (tmpry->str == NULL)
		{
			printf("[0] (nil)\n");
			tmpry = tmpry->next;
			rtrn++;
		}
		printf("[%u] %s\n", tmpry->len, tmpry->str);
		tmpry = tmpry->next;
		rtrn++;
	}
	return (rtrn);
}
