#include "3-calc.h"

/**
 * main - this program is a calculator (+, -, *, / or %) for a and b.
 * @argc: counter of receibed arguments.
 * @argv: array with the receibed arguments.
 *
 * Description: -Prints the result of the operation, followed
 *               by a new line.
 *              -If the number of arguments is wrong, print
 *               Error, followed by a new line, and exit with
 *               the status 98.
 *              -If the operator is none of the above, print Error,
 *               followed by a new line, and exit with the status 99.
 *              -If the user tries to divide (/ or %) by 0, print
 *               Error, followed by a new line, and exit with the
 *               status 100.
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int (*oper)(int a, int b);

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] != '+' && argv[2] != '-' &&
	    argv[2] != '*' && argv[2] != '/' &&
	    argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2] == '/' || argv[2] == '%') && atoi(arg[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	oper = get_op_func(argv[2]);
	return (oper(a, b));
}
