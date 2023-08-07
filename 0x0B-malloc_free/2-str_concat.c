#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings of any size
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 *
 * Return: pointer to a newly allocated space in memory or NULL if allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	c = a + b;
	s = malloc(sizeof(char) * (c + 1));

	if (s == NULL)
		return (NULL);

	b = 0;

	while (b < a)
	{
		s[b] = s1[b];
		b++;
	}

	while (b < c)
	{
		s[b] = s2[b - a];
		b++;
	}

	s[b] = '\0';
	return (s);
}
