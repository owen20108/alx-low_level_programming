#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: search linked list
 *
 * Return: point to  node where the loop begin, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *fs = head;

	if (!head)
		return (NULL);

	while (sl && fs && fs->next)
	{
		fs = fs->next->next;
		sl = sl->next;
		if (fs == sl)
		{
			sl = head;
			while (sl != fs)
			{
				sl = sl->next;
				fs = fs->next;
			}
			return (fs);
		}
	}

	return (NULL);
}
