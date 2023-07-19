#include "main.h"

/**
 * main - Starting point
 *
 * Description: prints sum of even value fibonacci sequence not exceed 4million
 *
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
