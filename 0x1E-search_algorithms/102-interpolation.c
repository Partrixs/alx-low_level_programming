#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
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
