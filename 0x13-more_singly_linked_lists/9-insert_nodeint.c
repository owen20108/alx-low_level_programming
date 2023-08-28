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
listint_t *n_node, *tmprry = *head;
unsigned int itrtr;

n_node = malloc(sizeof(listint_t));

if (n_node == NULL)
return (NULL);

n_node->n = n;

if (idx == 0)
{
n_node->next = tmprry;
*head = n_node;
return (n_node);
}

for (itrtr = 0; itrtr < (idx - 1); itrtr++)
{
if (tmprry == NULL || tmprry->next == NULL)
return (NULL);

tmprry = tmprry->next;
}

n_node->next = tmprry->next;
tmprry->next = n_node;

return (n_node);
}
