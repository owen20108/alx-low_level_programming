#include "lists.h"
/**
 * delete_nodeint_at_index - delete  node in  linked list for certain index
 * @head: pointer to the first element in the list
 * @index: index of  node to delete
 * Return: 1 if Success or -1 if Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempory = *head;
	listint_t *current = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempory);
		return (1);
	}

	while (y < index - 1)
	{
		if (!tempory || !(tempory->next))
			return (-1);
		tempory = tempory->next;
		y++;
	}


	current = tempory->next;
	tempory->next = current->next;
	free(current);

	return (1);
}
