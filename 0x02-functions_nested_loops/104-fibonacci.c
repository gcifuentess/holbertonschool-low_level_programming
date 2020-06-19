#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	float fibo1 = 1, fibo2 = 2, fibo3;

	printf("%.0f, ", fibo1);
	printf("%.0f, ", fibo2);

	for (i = 1; i < 97; i++)
	{
		fibo3 = fibo2;
		fibo2 = fibo1 + fibo2;
		fibo1 = fibo3;
		printf("%.0f", fibo2);
		if (i < 96)
			printf(", ");
	}
	printf("\n");
	return (0);
}
