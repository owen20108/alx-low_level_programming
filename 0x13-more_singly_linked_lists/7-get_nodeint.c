#include "lists.h"
/**
 * get_nodeint_at_index - pop out  node in index
 * @head: head node start 0
 * @index: index to return
 *
 * Return: node at index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int itrtor = 0;
	listint_t *recent = head;

	if (head == NULL)
		return (NULL);
	while (itrtor < index)
	{
		if (recent == NULL)
			return (NULL);
		recent = recent->next;
		itrtor++;
	}
	return (recent);
}
