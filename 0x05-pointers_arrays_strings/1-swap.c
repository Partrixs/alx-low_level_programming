#include <stdio.h>

/**
 * swap_int - swaps the valus of two integers.
 * @a: The first integer being swapped
 * @b: THe second integer being swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
