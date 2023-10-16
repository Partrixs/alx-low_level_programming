#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int a, f;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (f = 0; accept[f] != '\0'; f++)
		{
			if (s[a] == accept[f])
				return (s + a);
		}
	}
	return (NULL);
}
