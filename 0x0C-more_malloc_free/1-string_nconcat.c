#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string being concatenated
 * @s2: the second string
 * @n: the number of bytes from s2 to cocatenate
 *
 * Return: NULL if fail and empty if passed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, b = 0, c = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);

	while (b < len1)
	{
		s[b] = s1[b];
		b++;
	}

	while (c < n)
	{
		s[b + c] = s2[c];
		c++;
	}
	s[b + c] = '\0';
	return (s);
}
