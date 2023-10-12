#include "lists.h"

/**
 * sum_dlistint - count all the data  dlinked l
 * @head: head of the list
 *
 * Return: count total on success
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tempory;
	int sumtotal = 0;

	tempory = head;
	while (tempory != NULL)
	{
		sumtotal += tempory->n;
		tempory = tempory->next;
	} return (sumtotal);
}
