#include "holberton.h"

/**
 * flip_bits - counts the number ofbits you would need to flip
 *             to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Requirement: not allowed to use the % or / operators
 *
 * Return: number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fliped, TotalBits, actualBit, counter;

	fliped = n ^ m;

	TotalBits = sizeof(n) * 8;

	counter = 0;
	for ( ; TotalBits; TotalBits--)
	{
		actualBit = (fliped >> (TotalBits - 1)) & 1;
		if (actualBit)
			counter++;
	}

	return (counter);
}
