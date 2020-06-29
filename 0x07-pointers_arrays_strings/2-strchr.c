#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: The pointer to the space of memory to analize
 * @c: the character to locate
 *
 * Return: the pointer of the located @c
 */
char *_strchr(char *s, char c)
{
	char *located;
	unsigned long int i;

	located = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			located = $s[i];
			break;
		}
	}

	return (located);
}
