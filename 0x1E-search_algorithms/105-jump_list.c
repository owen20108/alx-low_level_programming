#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *             using the jump search algorithm.
 *
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, step_size;
    listint_t *node, *jump;

    /* Check if the list is NULL or empty */
    if (list == NULL || size == 0)
        return (NULL);

    /* Initialize variables for jump search */
    step = 0;
    step_size = sqrt(size);

    /* Perform the jump search */
    for (node = jump = list; jump->index + 1 < size && jump->n < value;)
    {
        /* Move forward in the list using the jump step */
        node = jump;
        for (step += step_size; jump->index < step; jump = jump->next)
        {
            if (jump->index + 1 == size)
                break;
        }

        /* Display the current checked node and value */
        printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
    }

    /* Display the range where the value is found to be located */
    printf("Value found between indexes [%ld] and [%ld]\n",
           node->index, jump->index);

    /* Perform a linear search within the identified range */
    for (; node->index < jump->index && node->n < value; node = node->next)
        printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
    printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

    /* Return the node containing the value if found, otherwise, return NULL */
    return (node->n == value ? node : NULL);
}

