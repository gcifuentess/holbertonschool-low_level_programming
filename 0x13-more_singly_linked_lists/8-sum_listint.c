#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a linked list.
 * @head: head pointer of the linked list.
 *
 * Return: sum of all the data (n) or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	sum = 0;
	if (!head)
		return (sum);

	for (ptr = head; ptr; ptr = ptr->next)
		sum += ptr->n;

	return (sum);
}
