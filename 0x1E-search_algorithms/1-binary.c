#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t vl, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (vl = left; vl < right; vl++)
			printf("%d, ", array[vl]);
		printf("%d\n", array[vl]);

		vl = left + (right - left) / 2;
		if (array[vl] == value)
			return (vl);
		if (array[vl] > value)
			right = vl - 1;
		else
			left = vl + 1;
	}

	return (-1);
}
