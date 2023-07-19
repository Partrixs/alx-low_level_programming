#include "main.h"
#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers starting with 1 and 2
 * Return: 0 (Success)
 */

int main(void)

{
	int tally;
	unsigned long b1 = 0, b2 = 1, sum;

	for (tally = 0; tally < 50; tally++)
	{
	sum = b1 + b2;
	printf("%lu", sum);

	b1 = b2;
	b2 = sum;

	if (tally == 49)
	printf("\n");
	else
	printf(". ");
	}
	return (0);
}
