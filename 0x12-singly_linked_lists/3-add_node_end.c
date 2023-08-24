#include "lists.h"
/**
 * add_node_end - add node at end of the linked list
 * @head: pointer for head
 * @str: pointer for string
 *
 * Return: address to new node or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int lngth = 0;
	list_t *tmprry;
	list_t *lastnode = *head;
	char *nwstrng = strdup(str);

	while (*str != '\0')
	{
		lngth++;
		str++;
	}

	tmprry = malloc(sizeof(list_t));
	if (tmprry == NULL)
	{
		return (NULL);
	}

	tmprry->str = nwstrng;
	tmprry->len = lngth;
	tmprry->next = NULL;

	if (*head == NULL)
	{
		*head = tmprry;
		return (tmprry);
	}
	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = tmprry;
	return (tmprry);
}
