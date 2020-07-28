#include "lists.h"

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
