#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers, starting with 1 and 2
 * Return: 0 (Success)
 */

int main(void)

{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_log1, fib1_log2, fib2_log1, fib2_log2;
	unsigned long log1, log2;

	for (count = 0; count < 92; count++)
	{
	sum = fib1 + fib2;
	printf("%lu ", sum);
	fib1 = fib2;
	fib2 = sum;
	}
	fib1_log1 = fib1 / 1000000000;
	fib2_log1 = fib2 / 1000000000;
	fib1_log2 = fib1 % 1000000000;
	fib2_log2 = fib2 % 1000000000;
	for (count = 93; count < 99; count++)
	{
	log1 = fib1_log1 + fib2_log1;
	log2 = fib1_log2 + fib2_log2;
	if (fib1_log2 + fib2_log2 > 999999999)
	{
	log1 += 1;
	log2 %= 1000000000;
	}
	printf("%lu%lu", log1, log2);
	if (count != 98)
	printf(", ");
	fib1_log1 = fib2_log1;
	fib1_log2 = fib2_log2;
	fib2_log1 = log1;
	fib2_log2 = log2;
	}
	printf("\n");
	return (0);
}
