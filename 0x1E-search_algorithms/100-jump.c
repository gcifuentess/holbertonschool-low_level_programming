#include "search_algos.h"
#include <math.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL, -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, root;
	int idx, try;

	if (!array)
		return (-1);

	a = 0;
	root = (size_t)abs(sqrt((double)(size)));
	b = root;
	while (array[MIN(b, size) - 1] < value)
	{
		idx = (int)MIN(b, size) - 1;
		try = (int)array[MIN(b, size) - 1];
		printf("Value checked array[%d] = [%d]\n", idx, try);
		a = b;
		b = b + root;
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);
	while (array[a] < value)
	{
		idx = (int)a;
		try = (int)array[a];
		printf("Value checked array[%d] = [%d]\n", idx, try);

		a++;
		if (a == MIN(b, size))
			return (-1);
	}

	if (array[a] == value)
		idx = (int)a;
		try = (int)array[a];
		printf("Value checked array[%d] = [%d]\n", idx, try);

		return (a);

	return (-1);
}
