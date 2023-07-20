#include "main.h"

/**
 * print_diagonal - print a diagonal line in the terminal
 * @n: number of times '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
