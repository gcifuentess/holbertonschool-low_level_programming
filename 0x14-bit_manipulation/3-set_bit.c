#include "holberton.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to change.
 * @index: index is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int converter;

	if (index >= (sizeof(n) * 8))
		return (-1);

	converter = 1;
	converter = converter << index;
	*n = *n | converter;

	return (1);

}
