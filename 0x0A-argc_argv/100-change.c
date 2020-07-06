#include "holberton.h"
#include <string.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 *        money.
 * @argc: Counts the number of arguments. Always >= 0.
 * @argv: Array with the strings of the names of the arguments
 * at least it will contain the name of the file program.
 *
 * Description: -Usage: ./change cents
 *              -Where cents is the amount of cents you need to give back.
 *		-If the number of arguments passed to your program is not
 *               exactly 1, print Error, followed by a new line, and return 1.
 *		-You should use atoi to parse the parameter passed to your
 *		 program.
 *              -If the number passed as the argument is negative, print 0,
 *               followed by a new line.
 *              -You can use an unlimited number of coins of values
 *               25, 10, 5, 2, and 1 cent.
 *
 * Return: 0 if no error, 1 if error.
 */
int main(int argc, char **argv)
{
	int j, i, sum = 0, remainder = atoi(argv[1]);
	char tmp[6];
	int CoinValues[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tmp[5] = '\0';
	if (atoi(argv[1]) > 0 && **(argv + 1) != '0')
	{
		strncpy(tmp, argv[1], 6);
		for (j = 0; tmp[j] != '\0'; j++)
		{
			if (isdigit(tmp[j]) == 0)
			{
				printf("0\n");
				return (0);
			}
		}
		for (i = 0; remainder; i++)
		{
			if (remainder / CoinValues[i] > 0)
				sum += remainder / CoinValues[i];
			remainder = remainder % CoinValues[i];
		}
	}
	else if (**(argv + 1) == '0')
		sum += atoi(argv[1]);
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
