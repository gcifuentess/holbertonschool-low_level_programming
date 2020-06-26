#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the pointer of the string to be encoded
 *
 * Return: the pointer of the encoded string
 */
char *rot13(char *s)
{
	/*int letter[50] = {a, A, b, B, c, C, d, D, e, E, f, F, g, G, h, H }*/
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
			s[i] = s[i] + 13;
		else if (s[i] >= 'n' && s[i] <= 'z')/*Start over range 'a'-'z'*/
			s[i] = 13 - ('z' - s[i]) - 1 + 'a';
		else if (s[i] >= 'N' && s[i] <= 'Z')/*Start over range 'A'-'Z'*/
			s[i] = 13 - ('Z' - s[i]) - 1 + 'A';
	}

	return (s);
}
