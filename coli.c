#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * coli - draft
 * @lineptr: draft
 * Return: draft
 */
char **coli(char *lineptr)
{
	int i;
	char **colir, *str;

	i = cdel(lineptr, '\n');
	colir = (char **) malloc(sizeof(char *) * (i + 1));
	if (colir == 0)
	{
		return (0);
	}
	str = strtok(lineptr, "\n");
	i = 0;
	while (str)
	{
		colir[i] = str;
		str = strtok(0, "\n");
		i++;
	}
	colir[i] = 0;

	return (colir);
}
