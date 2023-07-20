#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor
 * @v: assigned value 612852475143
 * Return: 0 (Succes)
 */

int main(void)

{
	long a, f;
	long v = 612852475143;
	double s = sqrt(v);

	for (a = 1; a <= s; a++)
	{
	if (v % a == 0)
	{
	f = v / a;
	}
	}
	printf("%ld\n", f);
	return (0);
}
