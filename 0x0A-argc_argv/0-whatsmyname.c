#include "holberton.h"

/**
 * main - program tht prints its name, followed by a new line
 * @argc: Counts the number of arguments. Always >= 0.
 * @argv: Array with the strings of the names of the arguments
 * at least it will contain the name of the file program.
 *
 * Return: if you rename the program, it will print the new name,
 * without having to compile it again. You should not remove the
 * path before the name of the program,
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
