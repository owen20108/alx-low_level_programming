#include "lists.h"
/**
 * add_node - adds nodes to beginning of the linked list or starts one
 * @head: pointer to the head
 * @str: pointer to string content of node
 *
 * Return: pointer to new node or null
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp;
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
	if (*head == NULL)
	{
		*head = temp;
		temp->str = newstr;
		temp->len = len;
		temp->next = NULL;
		return (temp);
	}
	temp->str = newstr;
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (temp);
}
