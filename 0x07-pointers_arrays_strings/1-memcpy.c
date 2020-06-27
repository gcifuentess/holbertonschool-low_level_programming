#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: The pointer of the memory area where to store the copy
 * @src: The pointer of the memory area source of the info to copy
 * @n: The amount of bytes to copy
 *
 * Return: The pointer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
