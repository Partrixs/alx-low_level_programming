#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: the block to be allocated
 * @old_size: size in bytes of the current allocated space
 * @new_size: size in bytes of the newly allocated space
 *
 * Return: NULL if new size equals to zero and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int  new_size)
{
	char *nptr;
	unsigned int b;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (b = 0; b < old_size && b < new_size; b++)
	{
		nptr[b] = ((char *) ptr)[b];
	}

	free(ptr);
	return (nptr);
}
