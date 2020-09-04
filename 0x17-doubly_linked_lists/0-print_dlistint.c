#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: header of a dlistint_t
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	if (!h)
		return (count);
	for (current = h; current; current = current->next)
	{
		printf("%d\n", current->n);
		count++;
	}
	return (count);
}
