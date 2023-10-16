#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
		dest[f] = src[f];

	return (dest);
}
