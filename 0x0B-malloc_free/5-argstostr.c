#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of the arguments
 *
 * Return: -Returns a pointer to a new string, or NULL if it fails.
 *         -Returns NULL if ac == 0 or av == NULL.
 *         -Each argument should be followed by a \n in the new string.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, flen;

	flen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			flen += 1;
		flen += 1; /*The space for '\0' char */
	}

	ptr = malloc(sizeof(char) * flen + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 1, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			ptr[k++] = av[i][j];
		ptr[k++] = '\n';/*replacing '\0' with '\n'*/
	}
	ptr[k] = '\0';
	printf("%s\n", ptr);

	return (ptr);
}
