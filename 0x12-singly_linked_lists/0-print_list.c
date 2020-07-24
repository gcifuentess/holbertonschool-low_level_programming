#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to he list.
 *
 * Information: If str is NULL, print [0] (nil).
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;
	list_t *toPrint;

	n = 0;
	toPrint = NULL;

	if (!h)
		return (0);

	if ((h->str) != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[%d] %s\n", 0, "(nil)");
	n++;
	for (toPrint = h->next; toPrint; toPrint = toPrint->next)
	{
		if ((toPrint->str) != NULL)
			printf("[%d] %s\n", toPrint->len, toPrint->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		n++;
	}

	return (n);
}
