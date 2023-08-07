#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to an array of integers
 * @width: integer tobe returned to
 * @height: integer to be returned to
 *
 * Return: Null on failure
 */

int **alloc_grid(int width, int height)
{
	int e, f, g, h;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (e = 0; e < height; e++)
	{
		a[e] = malloc(sizeof(int) * width);

		if (a[e] == NULL)
		{
			for (f = e; f >= 0; f--)
			{
				free(a[f]);
			}

			free(a);
			return (NULL);
		}
	}

	for (g = 0; g < height; g++)
	{
		for (h = 0; h < width; h++)
		{
			a[g][h] = 0;
		}
	}

	return (a);
}
