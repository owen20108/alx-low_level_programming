#include "lists.h"
/**
 * add_nodeint_end - add  node at the end of  linked list
 * @head: pointer to the first element in linked list
 * @n: data  insert into the new element
 * Return: pointer to  new node, or NULL if it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *tempo = *headn;

	newn = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (*headn == NULL)
	{
		*headn = newn;
		return (newn);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
