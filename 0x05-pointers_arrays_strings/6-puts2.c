#include "main.h"

/**
 * puts2 - prints all charecters of a string
 * @str: The string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
	b++;
	}

	for (a = 0; a < b; a += 2)
	{
	putchar(str[a]);
	}
	_putchar('\n');
}
