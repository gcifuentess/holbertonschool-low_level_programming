#include "lists.h"
#include "string.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to add to the new node.
 *
 * Information: -@str needs to be duplicated
 *              -allowed to use strdup.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	char *str_cpy;

	str_cpy = strdup(str);
	if (!str_cpy)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (!ptr)
	{
		free(str_cpy);
		return (NULL);
	}

	ptr->str = str_cpy;
	ptr->len = _strlen(str_cpy);
	if (*head)
	{
		for (temp = *head; temp->next; temp = temp->next)
		{
		}
		temp->next = ptr;
	}
	else
	{
		ptr->next = NULL;
		*head = ptr;
	}


	return (ptr);
}

/**
 * _strlen - returns the length of a string
 * @s: The original string
 *
 * Return: length of s.
 */
	int _strlen(char *s)
	{
		int length = 0, i;

		for (i = 0; s[i] != '\0'; i++)
			length = i + 1;

		return (length);
	}
