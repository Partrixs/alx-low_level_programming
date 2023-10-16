#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: number of bytes in s from accept bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
		bytes++;
		break;
		}
		else if (accept[i + 1] == '\0')
		return (bytes);
	}
	s++;
	}
	return (bytes);
}
