#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: head of the linked list.
 *
 * Return: the sum or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (!head)
		return (sum);
	for (current = head; current; current = current->next)
		sum += current->n;
	return (sum);
}
