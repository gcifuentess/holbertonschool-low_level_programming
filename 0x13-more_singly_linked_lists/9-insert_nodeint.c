#include "lists.h"

listint_t *add_nodeint_between(listint_t **head, unsigned int idx, int n);

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: Is the index of the list where the new node should be added.
 *       Index starts at 0.
 * @n: int to include in the new node.
 *
 * Important: -If it is not possible to add the new node at index idx,
 *             do not add the new node and return NULL
 *            -This function call other functions:
 *             i)  add_nodeint_between()
 *             ii) listint_len()
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int n_nodes;

	if (!head)
		return (NULL);

	if (!(*head) && idx > 0)
		return (NULL);

	n_nodes = (unsigned int)listint_len(*head);

	if (!(idx <= n_nodes))
		return (NULL);

	return (add_nodeint_between(head, idx, n));
}

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

/**
 * add_nodeint_between - adds a new node in between of a linkd list.
 * @head: head of the linked list.
 * @idx: Is the index of the list where the new node should be added.
 *       Index starts at 0.
 * @n: int to add to the new node.
 *
 * Important: -Needs to be called by insert_nodeint_at_index() to
 *             work properly.
 *            -This function call other functions:
 *             i)  malloc()
 *             ii) get_nodeint_at_index()
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_between(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptrTemp;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	if (*head && idx > 0)
	{
		/*next will find the previous node before idx*/
		ptrTemp = get_nodeint_at_index(*head, (idx - 1));
		ptr->next = ptrTemp->next;
		ptrTemp->next = ptr;
	}
	else if (*head && idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else if (!(*head) && idx == 0)
	{
		*head = ptr;
		(*head)->next = NULL;
	}
	else
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
