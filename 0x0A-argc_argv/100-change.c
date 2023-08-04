#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum numbe of coins for change
 * @argc: argument counts supplied in the programme
 * @argv: consisting of an array of pointers to the argument
 *
 * Return: 1 if not exactly one argument and 0 if otherwise
 */

int main(int argc, char *argv[])
{
	int cents, cns = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		cns++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", cns);

	return (0);
}
