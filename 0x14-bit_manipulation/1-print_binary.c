#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: int number.
 *
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int TotalBits, nToPrint;
	char flag;

	if (!n)
	{
		_putchar('0');
		return;
	}

	TotalBits = sizeof(n) * 8;

	flag = 'a';
	for ( ; TotalBits; TotalBits--)
	{
		/**
		 *use of bitwise to get from the most left of
		 *the bits to the most rigth one.
		 */
		nToPrint = (n >> (TotalBits - 1)) & 1;

		/*Following "if" is to evoid printing the left 0's*/
		if (!flag || nToPrint)
		{
			_putchar(nToPrint + '0');
			flag = '\0';
		}
	}
}
