#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a, move, next;

	if (array == NULL || size == 0)
		return (-1);

	move = sqrt(next);

	for (a = next = 0; next < size && array[next] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", next, array[next]);
		a = next;
		next += move;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, next);

	next = next > size - 1 ? next : size - 1;
	for (; a < next && array[a] < value; a++)
		printf("Value checked array [%ld] = [%d]\n", a, array[a]);
	printf("Value checked array [%ld] = [%d]\n", a, array[a]);

	return (array[a] == value ? (int)a : -1);
}
