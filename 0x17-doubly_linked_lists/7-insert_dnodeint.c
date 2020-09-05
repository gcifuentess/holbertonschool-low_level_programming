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
