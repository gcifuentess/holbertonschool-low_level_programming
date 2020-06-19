#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int fibo1 = 1, fibo2 = 2, fibo3;

	printf("%lu, ", fibo1);
	printf("%lu, ", fibo2);

	for (i = 0; i < 49; i++)
	{
		fibo3 = fibo2;
		fibo2 = fibo1 + fibo2;
		fibo1 = fibo3;
		printf("%lu", fibo2);
		if (i < 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
