#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @argc: des
 * @argv: des
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	unsigned long int mul, num1, num2;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;

	printf("%lu\n", mul);

	return (0);
}
