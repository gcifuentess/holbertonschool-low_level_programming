#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual;

	if (!head)
		exit(EXIT_SUCCESS);
	if (!(head->next))
	{
		free(head);
		exit(EXIT_SUCCESS);
	}
	for (actual = head; actual; actual = actual->next)
	{
		if ((actual->prev))
			free(actual->prev);
		if (!(actual->next))
		{
			free(actual);
			exit(EXIT_SUCCESS);
		}
	}
}
