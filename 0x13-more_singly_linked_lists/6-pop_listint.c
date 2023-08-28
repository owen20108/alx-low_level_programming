#include "lists.h"
/**
 * pop_listint - delete head of node and get node value
 * @head: delete node
 *
 * Return: node content therwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmprry;
	int numbr;

	tmprry = *head;

	if (tmprry == NULL)
	return (0);

	*head = tmprry->next;
	numbr = tmprry->n;
	free(tmprry);
	return (numbr);
}
