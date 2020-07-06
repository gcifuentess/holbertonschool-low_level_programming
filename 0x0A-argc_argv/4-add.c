#include "holberton.h"
#include <string.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: Counts the number of arguments. Always >= 0.
 * @argv: Array with the strings of the names of the arguments
 * at least it will contain the name of the file program.
 *
 * Description: -Print the result, followed by a new line.
 *              -If no number is passed to the program,
 *		 print 0, followed by a new line.
 *		-If one of the number contains symbols that are
 *               not digits, print Error, followed by a new line, and return 1.
 *		-Can assume that numbers and the addition of all the
 *		 numbers can be stored in an int.
 *
 * Return: 0 if no error, 1 if error.
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;
	char tmp[6];

	tmp[5] = '\0';
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0 && **(argv + i) != '0')
		{
			/* To discard number followed by chars e.g. 5ooo*/
			strncpy(tmp, argv[i], 6);
			for (j = 0; tmp[j] != '\0'; j++)
			{
				if (isdigit(tmp[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		else if (**(argv + i) == '0')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
