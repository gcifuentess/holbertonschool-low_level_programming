#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: The string to reverse
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, count = 0;
	char temp[256];

	for (i = 0; s[i] != '\0'; i++)
	{
		temp[i] = s[i];
		count++;
	}
	count--;
	for (i = count; i >= 0; i--)
		s[count - i] = temp[i];
}
