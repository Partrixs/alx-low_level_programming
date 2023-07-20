#include "main.h"

/**
 * print_line - prints a straight line on the terminal
 * @n: number of times '_' will be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;

		for (a = 1; a <= n; a++)
			_putchar('_');
		_putchar('\n');
	}
}
