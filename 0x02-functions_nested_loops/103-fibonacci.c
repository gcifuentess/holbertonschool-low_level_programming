#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms of some fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int fibo1 = 1, fibo2 = 2, fibo3, sumeven = 2;

	for (i = 1; i < 49; i++)
	{
		if (fibo1 + fibo2 > 4000000)
			break;
		fibo3 = fibo2;
		fibo2 = fibo1 + fibo2;
		fibo1 = fibo3;
		if (fibo2 % 2 == 0)
			sumeven = sumeven + fibo2;
	}
	printf("%lu\n", sumeven);
	return (0);
}
