#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int j;

	for (j = 0; j < 100; j++)
	{
		putchar(j + '0');
		if (j < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
