#include "lists.h"
/**
 * add_nodeint_end - adds nodes to the end of the linked list or starts one
 * @head: pointer to the head
 * @n: integer
 *
 * Return: pointer to new node or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmprry;
	listint_t *endnode = *head;

	tmprry = malloc(sizeof(listint_t));
	if (tmprry == NULL)
	{
		return (NULL);
	}

	tmprry->n = n;
	tmprry->next = NULL;

	if (*head == NULL)
	{
		*head = tmprry;
		return (tmprry);
	}
	while (endnode->next != NULL)
		endnode = endnode->next;

	endnode->next = tmprry;
	return (tmprry);
}
