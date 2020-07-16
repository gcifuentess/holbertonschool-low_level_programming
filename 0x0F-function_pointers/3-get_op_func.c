#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the correct op function
 * @s: operator (+, -, *, / or %).
 *
 *
 * Return: Pointer to the op_function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (s[0] == ops[i].op  && s[1] == '\0' && s != NULL)
			return (ops[i].f);
		i++;
	}

	return (NULL)
}
