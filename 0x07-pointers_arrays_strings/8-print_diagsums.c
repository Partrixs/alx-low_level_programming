#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: Input
 * @size: input
 */

void print_diagsums(int *a, int size)
{
	int g, h, tally1 = 0, tally2 = 0;

	for (g = 0; g <= (size * size); g = g + size + 1)
		tally1 = tally1 + a[g];

	for (h = size - 1; h <= (size * size) - size; h = h + size - 1)
		tally2 = tally2 + a[h];
	printf("%d, %d\n", tally1, tally2);
}
