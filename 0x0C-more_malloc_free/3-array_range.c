#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: NULL if min > max or if malloc fails
 */

int *array_range(int min, int max)
{
	int *r, y = 0;

	if (min > max)
		return (NULL);

	r = malloc(sizeof(int) * (max - min + 1));

	if (r == NULL)
		return (NULL);

	while (min <= max)
	{
		r[y] = min;
		y++;
		min++;
	}

	return (r);
}
