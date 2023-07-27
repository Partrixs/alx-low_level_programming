#include "main.h"
#include <stdio.h>

/**
 * rot13 - encorder
 * @s: pointer to string parameters
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char fig1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char figrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
		if (s[i] == fig1[j])
			{
			s[i] = figrot[j];
			break;
			}
		}
	}
	return (s);
}
