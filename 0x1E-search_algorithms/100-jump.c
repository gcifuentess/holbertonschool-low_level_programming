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
	b = jump = (size_t)sqrt((double)size);
	while (array[a] < value && b < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		a = b;
		b += jump;
	}
	a -= jump;
	b -= jump;
	printf("Value found between indexes[%d] and [%d]\n", (int)a, (int)b);

	while (a <= size)
	{
		if (array[a] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)a,
			       array[a]);
			return (a);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)a,
			       array[a]);
			a++;
		}
	}

	return (-1);
}
