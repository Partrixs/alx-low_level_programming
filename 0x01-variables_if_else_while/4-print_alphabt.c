#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char f;

	f = 'a';
	while
		(f <= 'z') {
			if ((f != 'q' && f != 'e') && f <= 'z')
				putchar(f);
			f++;
		}
	putchar('\n');
	return (0);
}
