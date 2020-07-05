#include "holberton.h"

/**
 * main - program that multiplies two numbers.
 * @argc: Counts the number of arguments. Always >= 0.
 * @argv: Array with the strings of the names of the arguments
 * at least it will contain the name of the file program.
 *
 * Description: -Should print the result of the multiplication,
 *               followed by a new line.
 *              -Can assume that the two numbers and result of
 *               the multiplication can be stored in an integer.
 *              -If the program does not receive two arguments,
 *               your program should print Error, followed by a
 *               new line, and return 1.
 *
 * Return: 0 if no error, 1 if error.
 */
int main(int argc, char **argv)
{
	int mult = 1;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
