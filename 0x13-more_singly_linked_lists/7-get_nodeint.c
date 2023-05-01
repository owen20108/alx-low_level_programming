#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: function that returns the sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tempory = head;

	while (tempory && x < index)
	{
		tempory = tempory->next;
		x++;
	}

	return (tempory ? tempory : NULL);
}
