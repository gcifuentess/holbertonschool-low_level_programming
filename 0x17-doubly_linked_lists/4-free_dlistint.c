#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *end;
	size_t n_nodes;

	n_nodes = dlistint_len(head);
	end = get_dnodeint_at_index(head, n_nodes - 1);

	while (end)
	{
		current = end;
		end = end->prev;
		free(current);
	}
}
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
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: is the index of the node, starting from 0.
 *
 * Return: returns the nth node, NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t n_nodes, i;
	dlistint_t *node;

	n_nodes = dlistint_len(head);
	if ((index + 1) > n_nodes || !n_nodes)
		return (NULL);
	for (i = 0, node = head; i < index; i++)
		node = node->next;
	return (node);
}
