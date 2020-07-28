#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: Is the index of the list where the new node should be added.
 *       Index starts at 0.
 * @n: int to include in the new node.
 *
 * Important: If it is not possible to add the new node at index idx,
 *            do not add the new node and return NULL
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int n_nodes;
	listint_t *ptr, *ptrTemp;

	if (!head)
		return (NULL);

	if (!(*head) && idx > 0)
		return (NULL);

	n_nodes = 0;
	for (ptr = *head; ptr; ptr = ptr->next)
		n_nodes++;

	if (!(idx <= n_nodes))
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	if (head)
	{
		/*next will find the previous node before idx*/
		ptrTemp = get_nodeint_at_index(*head, (idx - 1));
		ptr->next = ptrTemp->next;
		ptrTemp->next = ptr;
	}
	else
	{
		*head = ptr;
		(*head)->next = NULL;
	}

	return (ptr);
}
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: head of the linked list.
 * @index: the number of the desired node to get.
 *
 * Important: -Where index is the index of the node, starting at 0
 *            -If the node does not exist, return NULL.
 *
 * Return: Pointer to the desired node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	if (!head)
		return (NULL);

	count = 0;
	for (ptr = head; ptr; ptr = ptr->next)
		count++;
	if ((index + 1) > count)
		return (NULL);

	ptr = head;
	for (count = 0; count < index; count++)
		ptr = ptr->next;
	return (ptr);
}
