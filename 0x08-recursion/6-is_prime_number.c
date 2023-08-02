#include "main.h"
#include <stdio.h>

int check_prime(int n, int a);

/**
 * is _prime_number - Returns if a number is prime
 * @n: the number that is being checked
 *
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Checks for a prime number
 * @n: the number that is being checked
 * @a: the iteration times
 *
 * Return: 1 for prime or 0 if not
 */

int check_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	if (n % a == 0)
		return (0);

	if ((a * a) > n)
		return (1);

	return (check_prime(n, a + 1));
}
