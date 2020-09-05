#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the list
 * @n: int number to add to the list
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *actual;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		for (actual = *head; actual->next; actual = actual->next)
		{}
		new->prev = actual;
		actual->next = new;
	}
	return (new);
}
