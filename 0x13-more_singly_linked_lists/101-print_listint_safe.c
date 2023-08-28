#include "lists.h"
/**
 * print_listint_safe - function  print linked list with recursion
 * @head: pointer for first node in the linked list
 * Return: node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmprry_nod = NULL;
	const listint_t *fr_node = NULL;
	size_t nodecounter = 0;
	size_t newnode;

	tmprry_nod = head;
	while (tmprry_nod)
	{
		printf("[%p] %d\n", (void *)tmprry_nod, tmprry_nod->n);
		nodecounter++;
		tmprry_nod = tmprry_nod->next;
		fr_node = head;
		newnode = 0;
		while (newnode < nodecounter)
		{
			if (tmprry_nod == fr_node)
			{
				printf("-> [%p] %d\n", (void *)tmprry_nod, tmprry_nod->n);
				return (nodecounter);
			}
			fr_node = fr_node->next;
			newnode++;
		}
		if (!head)
			exit(98);
	}
	return (nodecounter);
}
