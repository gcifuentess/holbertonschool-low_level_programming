#include "search_algos.h"
#include <math.h>


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
	size_t a, b, jump;

	if (!array)
		return (-1);
	a = 0;
	b = jump = sqrt(size);

	while (array[a] < value && a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		a = b;
		b += jump;
	}

	if (a != 0)
	{
		a -= jump;
		b -= jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);

		if (array[a] == value)
			return (a);

		a++;
	}

	return (-1);
}
