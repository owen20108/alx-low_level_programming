#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node to speciefic index location
 * @head: pointer for head
 * @idx: location for index 
 * @n: integer for  store the new index
 *
 * Return: pointer to new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int itrtr = 0;
	listint_t *recent = *head;
	listint_t *n_node;

	while (itrtr < (idx - 1))
	{
		if (idx == 0)
			break;
		recent = recent->next;
		itrtr++;
	}
	if (recent == NULL && idx != 0)
		return (NULL);
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	if (idx == 0)
	{
		n_node->next = *head;
		*head = recent;
		return (n_node);
	}
	n_node->next = recent->next;
	recent->next = n_node;
	return (n_node);
}
