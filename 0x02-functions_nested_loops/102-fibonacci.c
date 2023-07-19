#include <stdio.h>

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
