#include "lists.h"
/**
 * add_nodeint_end - add node in the end of linked list
 * @head: pointer of the first element in linked list
 * @n: data that  insert in  new element
 * Return: pointer of the new node, or NULL 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnd;
	listint_t *tempory = *head;

	newnd = malloc(sizeof(listint_t));
	if (!newnd)
		return (NULL);

	newnd->n = n;
	newnd->next = NULL;

	if (*head == NULL)
	{
		*head = newnd;
		return (newnd);
	}

	while (tempory->next)
		tempory = tempory->next;

	tempory->next = newnd;

	return (newnd);
}
