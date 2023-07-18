#include "main.h"

/**
 * print_last_digit - prints last digit of a given number
 * @i: The number in question
 * Return: last digit of number
 */

int print_last_digit(int i)
{

	int last_value;

	last_value = i % 10;
	if (last_value < 0)
	{
	last_value = last_value * -1;
	}
	_putchar(last_value + '0');
	return (last_value);
}
