#include <stdio.h>

/**
 * main - Starting point
 *
 * Description: prints sum of even value fibonacci sequence not exceed 4million
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int limit = 4000000;
	int fib1 = 1;
	int fib2 = 2;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = fib1 + fib2;
		if (next % 2 == 0)
			sum = sum + next;
		fib1 = fib2;
		fib2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
