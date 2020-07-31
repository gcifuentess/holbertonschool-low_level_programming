#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list.
 * @head: head pointer of the linked list.
 *
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *actual, *loopStart;
	size_t count;
	char flag;

	if (!head)
		return (0);

	count = 0;
	loopStart = the_tortoise_and_the_hare(head);/*validates if loop exists*/
	flag = '\0'; /*Flag is down to go across the list at least one time*/

	for (actual = head; actual; actual = actual->next)
	{
		if (actual == loopStart && flag)
		{
			printf("-> [%p] %d\n", (void *)actual, actual->n);
			return (count);
		}

		printf("[%p] %d\n", (void *)actual, actual->n);
		count++;
		if (actual == loopStart)
			flag = '1';
	}
	return (count);
}

/**
 * the_tortoise_and_the_hare - to detect a loop in a linked list.
 * @head: head pointer of the linked list.
 *
 * Return: The node where the loop starts or NULL if no loop.
 */
const listint_t *the_tortoise_and_the_hare(const listint_t *head)
{
	const listint_t *tortoise, *hare, *flag, *broken, *actual;
	int len, i;

	tortoise = head;
	hare = tortoise->next;

	if (!tortoise || !hare)
		return (NULL);
	len = 0;/*number of nodes of the loop*/
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		if (hare)
			flag = hare->next;

		if (!flag || !hare)
			return (NULL);
		hare = (hare->next)->next;
		len++;
	}
	/*The next section is to locate the real beginning of the loop*/
	broken = head;
	actual = tortoise;
	while (!(actual->next == broken))
	{
		actual = tortoise;
		for (i = 0; i < len; i++)
		{
			if (actual->next == broken)
				return (broken);
			actual = actual->next;
		}
		broken = broken->next;
	}
	if (len == 2)
		return (tortoise->next);
	return (tortoise);
}
