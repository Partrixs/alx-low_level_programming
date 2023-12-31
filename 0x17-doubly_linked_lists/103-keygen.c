#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int a, j;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (a = 0, add = 0; a < len; a++)
		add += argv[1][a];
	p[1] = l[(add ^ 79) & 63];
	for (a = 0, j = 1; a < len; a++)
		j *= argv[1][a];
	p[2] = l[(j ^ 85) & 63];
	for (j = argv[1][0], a = 0; a < len; a++)
		if ((char)j <= argv[1][a])
			j = argv[1][a];
	srand(j ^ 14);
	p[3] = l[rand() & 63];
	for (j = 0, a = 0; a < len; a++)
		j += argv[1][a] * argv[1][a];
	p[4] = l[(j ^ 239) & 63];
	for (j = 0, a = 0; (char)a < argv[1][0]; a++)
		j = rand();
	p[5] = l[(j ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
