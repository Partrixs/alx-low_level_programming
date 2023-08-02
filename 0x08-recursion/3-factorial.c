#include "main.h"

/**
 * factorial - calculates the factorail of a wgiven number
 * @n: the number to use in calculating the factorial
 *
 * Return: an integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
