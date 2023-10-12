#include "lists.h"

/**
 * insert_dnodeint_at_index - insert  new node in
 * a given position
 *
 * @h: head of the list
 * @idx: index  new node
 * @n: value  the new node
 * Return:  address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *head;
	unsigned int x;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		head = *h;
		x = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (x == idx)
			{
				if (head->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = head->next;
						newnode->prev = head;
						head->next->prev = newnode;
						head->next = newnode;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (newnode);
}
