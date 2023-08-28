#include "lists.h"
/**
 * add_nodeint - add nodes at the beginning to a linked list of integers
 * @head: pointer for the head
 * @n: an integer
 *
 * Return: pointer for the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmprry;

	tmprry = malloc(sizeof(listint_t));
	if (tmprry == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = tmprry;
		tmprry->n = n;
		tmprry->next = NULL;
		return (tmprry);
	}
	tmprry->n = n;
	tmprry->next = *head;
	*head = tmprry;
	return (tmprry);
}
