#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to be changed
 *
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * Return: the pointer of the changed string
 */
char *cap_string(char *s)
{
	int separator[13] = {32, 9, 10, 44, 59, 46, 33,
			     63, 34, 40, 41, 123, 125};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i > 0 && s[i] >= 87 && s[i] <= 122)
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i - 1] == separator[j])
				{
					s[i] = s[i] - 32;
					break;
				}
			}
		}
		else if (i == 0 && s[i] >= 87 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
