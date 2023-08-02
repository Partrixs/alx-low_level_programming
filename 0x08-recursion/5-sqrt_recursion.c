#include "main.h"
#include <stdio.h>

int _sqrt_recursion_helper(int n, int a);

/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: the value to calculate its squareroot
 *
 * Return: natural squreroot
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - calculates natural squareroot
 * @n: number to calculate its squareroot
 * @a: the iterate number
 *
 * Return: natural squareroot
 */

int _sqrt_recursion_helper(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)

		return (-1);

	if (sqrt == n)

		return (a);

	return (_sqrt_recursion_helper(n, a + 1));
}
