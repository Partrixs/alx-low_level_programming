#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, sum = 0;
	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = n >> a;

		if (curr & 1)
		{
			_putchar('1');
			sum++;
		}
		else if (sum)
			_putchar('0');
	}
	if (!sum)
		_putchar('0');
}
