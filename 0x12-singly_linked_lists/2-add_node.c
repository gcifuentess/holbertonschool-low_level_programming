#pinclude "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: string to add to the new node.
 *
 * Information: -@str needs to be duplicated
 *              -allowed to use strdup.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *str_cpy;

	str_cpy = _strdup(str);
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
	ptr->next = NULL;

	*head = ptr;

	return (ptr);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *    which contains a copy of the string given as a parameter.
 * @str: the string to be copied.
 *
 * Description: -Returns a pointer to a new string which is a duplicate
 *               of the string str. Memory for the new string is obtained
 *               with malloc, and can be freed with free.
 *              -Returns NULL if str = NULL.
 *
 * Return: On success, the _strdup function returns a pointer to the
 *         duplicated string. It returns NULL if insufficient memory
 *         was available
 */
char *_strdup(const char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;

	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
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
