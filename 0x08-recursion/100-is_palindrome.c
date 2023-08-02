#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comp - Compares each charecter of the string
 * @s: the string
 * @i1: smallest iterator
 * @i2: biggest iterator
 * Return: null
 */

int comp(char *s, int i1, int i2)
{
	if (*(s + i1) == *(s + i2))
	{
		if (i1 == i2 || i1 == i2 + 1)
			return (1);
		return (0 + comp(s, i1 + 1, i2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is palindrome
 * @s: the string
 * Return: 1 if s palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
