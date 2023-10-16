#include "main.h"

/**
 * _isdigit - function that checks for digits
 * @c: the digit being checked
 * Return: 1 when successfull and 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
