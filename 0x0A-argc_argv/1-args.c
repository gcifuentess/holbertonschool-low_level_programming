#include "holberton.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: Counts the number of arguments. Always >= 0.
 * @argv: Array with the strings of the names of the arguments
 * at least it will contain the name of the file program.
 *
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
