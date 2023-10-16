#include "main.h"

/**
 * _memset - Entry point
 * @s: destination pointed out
 * @b: constant byte
 * @n: bytes
 * Return: 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
		s[f] = b;
	return (s);
}
