#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void _is_zero(char *argv[]);
char *_initialize_array(char *ar, int lar);
int _checknum(char *str);
void perform_multiplication(char *argv[], char *nout, int ln1, int ln2);
void handle_overflow(char **nout, int *lnout);
/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}
	}

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */

char *_initialize_array(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @str: input string.
 *
 * Return: length of the number.
 */
int _checknum(char *str)
{
	int ln;

	for (ln = 0; str[ln]; ln++)
	{
		if (!isdigit(str[ln]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (ln);
}

/**
 * handle_overflow - handles overflow in the result array.
 * @nout: pointer to the result array.
 * @lnout: pointer to the length of the result array.
 *
 * Return: no return.
 */

void handle_overflow(char **nout, int *lnout)
{
	int i;

	if ((*nout)[0] == '0')
	{
		for (i = 1; i < *lnout; i++)
		{
			(*nout)[i - 1] = (*nout)[i];
		}
		(*lnout)--;
		*nout = realloc(*nout, *lnout + 1);
	}
}

/**
 * perform_multiplication - performs multiplication of two numbers
 * @argv: argument vector
 * @nout: output array to restore the result
 * @ln1: length of the first number
 * @ln2: length of the second number
 *
 * Return: no return
 */

void perform_multiplication(char *argv[], char *nout, int ln1, int ln2)
{
	int k, i;
	int add1 = 0, add = 0;
	int j, ca;

	for (k = ln1 + ln2 - 1, i = ln1 - 1; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (add1 > 0)
			{
				add = (nout[k] - '0') + add1;

				if (add > 9)
				{
					nout[k - 1] = (add / 10) + '0';
				}

				nout[k] = (add % 10) + '0';
			}
			i = ln1 - 1;
			j--;
			add1 = 0;
			ca++;
			k = ln1 + ln2 - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
			{
				break;
			}
			ln1--;
			free(nout);
			nout = malloc(ln1 + ln2 + 1);
			nout = _initialize_array(nout, ln1 + ln2);
			k = ln1 + ln2 - 1;
			i = ln1 - 1;
			j = ln2 - 1;
			ca = add1 = 0;
		}

		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + add1;
			add1 = add / 10;
			nout[k] = (add % 10) + '0';
		}
	}
}

int main(int argc, char *argv[])
{
	int ln1, ln2, lnout;
	char *nout;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}

	ln1 = _checknum(argv[1]);
	ln2 = _checknum(argv[2]);
	_is_zero(argv);
	lnout = (ln1 + ln2);
	nout = malloc(lnout + 1);

	if (nout == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	nout = _initialize_array(nout, lnout);
	perform_multiplication(argv, nout, ln1, ln2);
	handle_overflow(&nout, &lnout);

	printf("%s\n", nout);
	return (0);
}
