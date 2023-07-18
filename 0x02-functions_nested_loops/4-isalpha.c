#include "main.h"

/**
 * _isalpha - Checksd for alphabets
 * @c: The charecter to be checked
 * Return: 1 for alphabetic charecter or 0 for anything else
 */

int _isalpha(int c)

{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (0);
	}
	return (1);
}
