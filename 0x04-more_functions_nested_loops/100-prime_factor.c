#include <stdio.h>

/**
 * main - prime_factor
 *
 * Description: Write a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: void
 */
int main(void)
{
	int count;
	long int n = 612852475143, balance = n, i, j, prime = 2;

	for (i = 2; i <= n; i++)
	{
		count = 0;
		for (j = prime; j <= i; j++)/*Checks if j is prime*/
		{
			if (i % j == 0)
				count++;
			if (count > 1)
				break;
		}
		if (count == 1)
			prime = i;
		while (balance % prime == 0 && balance > 1)
			balance = balance / prime;
		if (balance == 1)
			break;
	}
	printf("%li\n", prime);
	return (0);
}
