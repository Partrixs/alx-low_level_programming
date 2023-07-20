#include <stdio.h>

/**
 * main - printing a fizz-buzz-test
 * Return: 0;
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (a % 3 == 0)
			printf("%s", "Fizz");
		else if (a % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
