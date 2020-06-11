#include <stdio.h>

/**
 * main - this program prints the size of various types on the computer.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Tchar;
	int Tint;
	long int Tlint;
	long long int Tllint;
	float Tfloat;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(Tchar));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(Tint));
	printf("Size of a long int: %lu byte(s)\n"
	       , (unsigned long)sizeof(Tlint));
	printf("Size of a long long int: %lu byte(s)\n"
	       , (unsigned long)sizeof(Tllint));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(Tfloat));

	return (0);
}
