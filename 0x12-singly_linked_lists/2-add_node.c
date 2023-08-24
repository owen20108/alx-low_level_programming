#include "lists.h"
/**
 * add_node - add node to begin of the linked list
 * @head: pointer for head
 * @str: pointer for string
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int lngth = 0;
	list_t *tmprry;
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
	if (*head == NULL)
	{
		*head = tmprry;
		tmprry->str = nwstrng;
		tmprry->len = lngth;
		tmprry->next = NULL;
		return (tmprry);
	}
	tmprry->str = nwstrng;
	tmprry->len = lngth;
	tmprry->next = *head;
	*head = tmprry;
	return (tmprry);
}
