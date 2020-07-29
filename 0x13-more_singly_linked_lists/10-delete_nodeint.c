#include "lists.h"

int delete_nodeint(listint_t **head, unsigned int idx);

/**
 * delete_nodeint_at_index - deletes the node at index of a
 *                           linked list.
 * @head: Double pointer to the head of the list.
 * @index: Is the index of the list where the new node should be
 *       deleted. Index starts at 0.
 *
 * Important: -This function call other functions:
 *             i)  delete_nodeint()
 *             ii) listint_len()
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n_nodes;

	if (!head)
		return (-1);

	if (!(*head) && index > 0)
		return (-1);

	n_nodes = (unsigned int)listint_len(*head);

	if (!(index < n_nodes))
		return (-1);

	return (delete_nodeint(head, index));
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
 * delete_nodeint - deletes a node of a linked list.
 * @head: head of the linked list.
 * @idx: Is the index of the list where the new node should be added.
 *       Index starts at 0.
 *
 * Important: -Needs to be called by delete_nodeint_at_index() to
 *             work properly.
 *            -This function calls get_nodeint_at_index()
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint(listint_t **head, unsigned int idx)
{
	listint_t *prevNode, *nextNode;

	if (*head && idx > 0)
	{
		/*here will find the node before idx*/
		prevNode = get_nodeint_at_index(*head, (idx - 1));
		if ((prevNode->next)->next)/*check if node after idx exists*/
		{
			/*here will find the node after idx*/
			nextNode = get_nodeint_at_index(*head, (idx + 1));
		}
		else
			nextNode = (prevNode->next)->next;/*getting Null*/
		free(prevNode->next);
		prevNode->next = nextNode;
	}
	else if (*head && idx == 0 && (*head)->next)
	{
/*because we are in the head, is no necessary to check the previous for node*/
		nextNode = get_nodeint_at_index(*head, (idx + 1));
		free(*head);
		*head = nextNode;
	}
	else if (*head && idx == 0 && !((*head)->next))
	{
		free(*head);
		*head = NULL;
	}
	else
		return (-1);

	return (1);
}
