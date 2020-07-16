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
	int a, b;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);
	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') &&
	    atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", oper(a, b));
	return (0);
}
