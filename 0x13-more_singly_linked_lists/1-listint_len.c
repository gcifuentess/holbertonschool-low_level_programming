#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: linked list.
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *ptr, initial_node;
	size_t count;

	if (!h)
		return (0);

	initial_node = *h;
	count = 0;

	for (ptr = &initial_node; ptr; ptr = ptr->next)
		count++;

	return (count);
}
