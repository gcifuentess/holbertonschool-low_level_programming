#include "search_algos.h"



/**
 * linear_search - searches in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL, -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int current;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		current =  array[i];
		printf("Value checked array[%d] = [%d]\n", (int)i, current);
		if (current == value)
			return (i);
	}

	return (-1);
}
