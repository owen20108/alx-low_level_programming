#include "lists.h"
/**
 * sum_listint - calculate  sum of   data in  listint_t list
 * @head: first node in  linked list
 * Return: sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempory = head;

	while (tempory)
	{
		sum += tempory->n;
		tempory = tempory->next;
	}

	return (sum);
}
