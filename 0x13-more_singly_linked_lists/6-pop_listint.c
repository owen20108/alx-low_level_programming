#include "lists.h"
/**
 * pop_listint - delete head of node and get node value
 * @head: delete node
 *
 * Return: node content therwise 0
 */
int pop_listint(listint_t **head)
{
	int numb = 0;
	listint_t *recent;
	listint_t *next;

	if (*head != NULL)
	{
		recent = *head;
		numb = recent->numb;
		next = recent->next;
		free(recent);
		*head = next;
	}
	return (numb);
}
