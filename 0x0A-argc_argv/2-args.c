#include "holberton.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: Counts the number of arguments. Always >= 0.
 * @argv: Array with the strings of the names of the arguments
 * at least it will contain the name of the file program.
 *
 * Description: All arguments should be printed, including the first one.
 *              Only print one argument per line, ending with a new line.
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
