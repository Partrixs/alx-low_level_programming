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
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	if (n >= c)
		d = a + b;
	else
		d = a + n;

	s = malloc(sizeof(char) * (d + 1));
	if (s == NULL)
		return (NULL);

	b = 0;

	while (b < d)
	{
		if (b < a)
		s[b] = s1[b];

		else
		{
			s[b] = s2[c];
			c++;
		}
		b++;
	}
	s[b] = '\0';
	return (s);
}
