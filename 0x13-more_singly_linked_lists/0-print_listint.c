#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list.
 *
 * Important: Allowed to use printf().
 *
 * Return:the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr, initial_node;
	size_t count;

	if (!h)
		return (0);

	initial_node = *h;
	count = 0;
	for (ptr = &initial_node; ptr; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		count++;
	}

	return (count);
}
