#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, sum = 0;
	unsigned long int curr;
	unsigned long int brand = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		curr = brand >> p;
		if (curr & 1)
			sum++;
	}

	return (sum);
}
