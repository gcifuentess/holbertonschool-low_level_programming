#include "holberton.h"

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	unsigned long int mul, num1, num2, i;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (atoi(&argv[1][i]) == 0 && argv[1][i] != '0')
		{
			printf("Error\n");
			exit(98);
		}
	}
	num1 = atoi(argv[1]);

	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (atoi(&argv[2][i]) == 0 && argv[2][i] != '0')
		{
			printf("Error\n");
			exit(98);
		}
	}
	num2 = atoi(argv[2]);

	mul = num1 * num2;

	printf("%lu\n", mul);

	return (0);
}
