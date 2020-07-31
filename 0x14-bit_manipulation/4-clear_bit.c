#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to change.
 * @index: index is the index, starting from 0 of the bit you want to s
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int converter;

	if (index >= (sizeof(n) * 8))
		return (-1);

	converter = 1;
	converter = ~(converter << index);
	*n = *n & converter;

	return (1);
}
