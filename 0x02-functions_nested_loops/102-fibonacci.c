#include <stdio.h>

/**
 * main - prints first 52 fibonacci numbers
 * Return: None
 */

int main(void)

{
	int a = 0
	long b = 1, c = 2;

	while (a < 50)
	{
	if (a == 0)
	printf("%ld", b);
	else if (a == 1)
	printf(", %ld", c);
	else
	{
	c += b;
	b = c - b;
	printf(", %ld", c);
	}
	++a;
	}
	printf("\n");
	return (0);
}
