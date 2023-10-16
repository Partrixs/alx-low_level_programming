#include "main.h"

/**
 * _strncat - Concanate two strings using an input number of bytes from src.
 * @dest: The string to be apppended on.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src being appended to dest.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = ('\0');
	return (dest);
}
