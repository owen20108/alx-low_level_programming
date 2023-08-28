#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node for index in linked list
 * @head: start  of linked list
 * @index: specified location
 * Return: 1 if successful otherwise -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevos;
	listint_t *recent = *head;
	unsigned int anode;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(recent);
		return (1);
	}

	for (anode = 0; recent && (anode <= index); anode++)
	{
		if (anode == index)
		{
			prevos->next = recent->next;
			free(recent);
			return (1);
		}
		else
		{
			prevos = recent;
			recent = recent->next;
		}
	}
	return (-1);
}
