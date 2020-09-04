#include "lists.h"

/**
 * dlistint_len - eturns the number of elements in a linked dlistint_t list
 * @h: header of the list
 *
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	if (!h)
		return (count);
	for (current = h; current; current = current->next)
		count++;
	return (count);
}
