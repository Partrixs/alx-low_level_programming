#include "main.h"

/**
 * _pow_recursion - returns a value of x raised to the power of y
 * @x: the value used to multiply a given number
 * @y: the times to be multiplied by the value
 * Return: the value multiplied y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
