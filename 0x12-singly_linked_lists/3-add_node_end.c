#include "lists.h"
/**
 * add_node_end - adds nodes to the end of the linked list or starts one
 * @head: pointer to the head
 * @str: pointer to string content of node
 *
 * Return: pointer to new node or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp;
	list_t *last = *head;
	char *newstr = strdup(str);

	while (*str != '\0')
	{
		len++;
		str++;
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = newstr;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = temp;
	return (temp);
}
