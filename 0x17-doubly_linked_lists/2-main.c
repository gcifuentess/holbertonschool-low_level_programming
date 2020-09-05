#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head, *end, *actual;

	head = NULL;
	end = add_dnodeint(&head, 0);
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 3);
	add_dnodeint(&head, 4);
	add_dnodeint(&head, 98);
	add_dnodeint(&head, 402);
	add_dnodeint(&head, 1024);
	print_dlistint(head);
	for (actual = end; actual; actual = actual->prev)
		printf("%d\n", actual->n);

	return (EXIT_SUCCESS);
}
