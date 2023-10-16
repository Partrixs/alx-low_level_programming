#include "main.h"

/**
 * _abs - Computes absolute value of an integer.
 * @a: Computed number
 * Return: Absolute value or zero
 */

int _abs(int a)
{

	if (a < 0)
	{
	int _val;

	_val = a * -1;
	return (_val);
	}
	return (a);
}
