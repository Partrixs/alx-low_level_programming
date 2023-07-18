#include <stdio.h>

/**
 * main - Prints sum of multiples of 3 or 5 up to 1024
 * Return: (Success)
 */

int main(void)

{
	int b, j = 0;

	while (b < 1024)
	{
	if ((b % 3 == 0) || (b % 5 == 0))
	{
	j += b;
	}
	b++;
	}
	printf("%d\n", j);
	return (0);
}
