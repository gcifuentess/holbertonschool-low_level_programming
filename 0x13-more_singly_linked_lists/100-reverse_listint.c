#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: bouble pointer to the head of the list.
 *
 * Important: -Not allowed to use more than 1 loop.
 *            -You are not allowed to use malloc, free or arrays.
 *            -You can only declare a maximum of two variables
 *             in your function
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *lastNode;

	lastNode = NULL;
	ptr = *head;

	while ((*head)->next)
	{
		if (!((ptr->next)->next))
		{
			if (!lastNode)
				lastNode = ptr->next;
			(ptr->next)->next = ptr;
			ptr->next = NULL;
		}
		if (!(ptr->next))
			ptr = *head;
		else
			ptr = ptr->next;
	}
	if (lastNode)
		*head = lastNode;

	return (*head);
}
