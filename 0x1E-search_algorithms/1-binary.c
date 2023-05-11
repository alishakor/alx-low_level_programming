#include "search_algos.h"

/**
 * binary_search - search for a value in an integer array using a binary
 * search algorithm
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to be search
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int start, mid, end;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Binary Search in array: ");
		for (x = start; x <= end; x++)
			printf("%i%s", array[x], x == end ? "\n" : ", ");

		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
