#include "main.h"

/**
 * _isupper - checks for uppercase charecters
 * @c: parameter being checked
 * Return: 1 on success and 0 0n failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
