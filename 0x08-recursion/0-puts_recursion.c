#include "main.h"

/**
 * _puts_recursion - Prints a string followed by anew line
 * @s: the string thats to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar ('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
