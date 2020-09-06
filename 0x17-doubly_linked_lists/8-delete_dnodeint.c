#include "lists.h"

dlistint_t *get_dnodeint_at_index_2(dlistint_t *head, unsigned int index);
size_t dlistint_len_2(const dlistint_t *h);


/**
 * delete_dnodeint_at_index - deletes the node at index
 *                            index of a dlistint_t linked list.
 * @head: head of the list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	if (!head)
		return (-1);

	node = get_dnodeint_at_index_2(*head, index);
	if (!node)
	{
		return (-1);
	}
	else
	{
		if (!(node->prev) && !(node->next))
		{
			free(node);
			*head = NULL;
			return (1);
		}
		if (!(node->prev))
		{
			*head = node->next;
			(*head)->prev = NULL;
			free(node);
			return (1);
		}
		if (!(node->next))
		{
			(node->prev)->next = NULL;
			free(node);
			return (1);
		}
		(node->prev)->next = node->next;
		(node->next)->prev = node->prev;
		free(node);
	}
	return (1);
}
/**
 * get_dnodeint_at_index_2 - returns the nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: is the index of the node, starting from 0.
 *
 * Return: returns the nth node, NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index_2(dlistint_t *head, unsigned int index)
{
	size_t n_nodes, i;
	dlistint_t *node;

	n_nodes = dlistint_len_2(head);
	if ((index + 1) > n_nodes || !n_nodes)
		return (NULL);
	for (i = 0, node = head; i < index; i++)
		node = node->next;
	return (node);
}

/**
 * dlistint_len_2 - eturns the number of elements in a linked dlistint_t list
 * @h: header of the list
 *
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len_2(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	if (!h)
		return (count);
	for (current = h; current; current = current->next)
		count++;
	return (count);
}
