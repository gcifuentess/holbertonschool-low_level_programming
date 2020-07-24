#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: linked list.
 *
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count;
	list_t *ptr;

	if (h)
		count = 1;
	else
		return (count = 0);

	if (!(h->next))
		return (count);

	for (ptr = h->next; ptr->next; ptr = ptr->next)
		count++;
	count++;

	return (count);
}
