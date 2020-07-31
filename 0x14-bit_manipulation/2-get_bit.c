#include "holberton.h"

/**
 * get_bit - finds the value of a bit at a given index.
 * @n: int number.
 * @index: is the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int TotalBits, actualBit, counter;
	char flag;

	if ((n == 0 || n == 1) && index == 0)
		return (n);

	TotalBits = sizeof(n) * 8;

	flag = 'a';
	counter = 0;
	for ( ; TotalBits; TotalBits--)
	{
		/**
		 *use of bitwise to get from the most left of
		 *the bits to the most rigth one.
		 */
		actualBit = (n >> (TotalBits - 1)) & 1;

		/*Following "if" is to evoid counting the left 0's*/
		if (!flag || actualBit)
			flag = '\0';
		if (!flag)
			counter++;
	}
	if (!(index < counter))
		return (-1);

	for ( ; counter; counter--)
		if (counter == (index + 1))
		{
			actualBit = ((n >> index) & 1;
			return (actualBit);
		}
	return (-1);
}
