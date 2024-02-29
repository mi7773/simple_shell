#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * myread - draft
 * Return: draft
 */
char *myread(void)
{
	int i, j;
	char buf[2048];
	char *lineptr = 0;

	j = 0;
	i = 0;
	buf[i] = 0;
	while (1)
	{
		j = read(STDIN_FILENO, &buf[i], 1);
		if (j != 1)
		{
			break;
		}
		i++;
	}
	buf[i] = 0;
	i = findl(buf);
	lineptr = (char *) malloc(sizeof(char) * (i + 1));
	if (lineptr == 0)
	{
		return (0);
	}
	myswap(lineptr, buf);
	lineptr[i] = 0;

	return (lineptr);
}
