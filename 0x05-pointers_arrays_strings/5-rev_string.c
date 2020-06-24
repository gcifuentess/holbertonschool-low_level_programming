#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: The string to reverse
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, temp, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	count--;
	for (i = 0; i <= (count / 2); i++)
	{
		temp = s[i];
		s[i] = s[count - i];
		s[count - i] = temp;
	}
}
