#include "search_algos.h"

/**
 *interpolation_search - function that  searches
 *for a value in a sorted array of integers
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t a, l, b;

	if (array == NULL)
		return (-1);

	for (l = 0, (b = size - 1); b >= l;)
	{
		a = l + (((double)(b - l) / (array[b] - array[l])) * (value - array[l]));
		if (a < size)
		{
			printf("Value checked array [%ld] = [%d]\n", a, array[a]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			b = a - 1;
		else
			l = a + 1;
	}
	return (-1);

}
