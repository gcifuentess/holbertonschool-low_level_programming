#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the list where the new node should be added. Index starts at 0
 * @n: int number to add.
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new;
	size_t n_nodes;

	if (!h)
		return (NULL);

	node = get_dnodeint_at_index(*h, idx);
	if (!node || idx == 0)
	{
		n_nodes = dlistint_len(*h);
		if (idx == 0)
			new = add_dnodeint(h, n);
		else if (idx == n_nodes)
			new = add_dnodeint_end(h, n);
		else
			return (NULL);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = node;
		new->prev = node->prev;
		(node->prev)->next = new;
		node->prev = new;
	}
	return (new);
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
