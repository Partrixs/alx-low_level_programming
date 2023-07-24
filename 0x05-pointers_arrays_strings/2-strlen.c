#include <stdio.h>

/**
 * _strlen - Rturns the length of a string.
 * @str: The string that we looking for its length
 * Return: the length of @srtr.
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
	len++;
	return (len);
}
