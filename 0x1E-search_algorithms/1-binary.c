#include "search_algos.h"


/**
 * binary_search - earches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL, -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i, j;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (j = left; j <= right; j++)
		{
			printf("%d", (int)array[j]);
			if (j < right)
				printf(", ");
			else
				printf("\n");
		}
		i = (left + right) / 2;
		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else
			return (i);
	}

	return (-1);
}
