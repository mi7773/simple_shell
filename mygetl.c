#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * mygetl - darft
 * Return: draft
 */
char *mygetl(void)
{
	size_t n = 0;
	ssize_t glr;
	char *lineptr = 0;

	glr = getline(&lineptr, &n, stdin);
	if (glr == -1)
	{
		free(lineptr);

		return (0);
	}

	return (lineptr);
}
