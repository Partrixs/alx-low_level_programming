#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: a pointer to a new string or NULL when failed
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, a = 0, b = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{

		while (av[a][b])
		{
			ch++;
			b++;
		}

		b = 0;
		a++;
	}

	s = malloc(sizeof(char) * (ch + ac + 1));

	a = 0;
	c = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			s[c] = av[a][b];
			c++;
			b++;
		}
		s[c] = '\n';
		c++;
		a++;
	}
	s[c] = '\0';
	return (s);
}
