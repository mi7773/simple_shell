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
	char **colir = 0;

	i = cdel(lineptr, '\n');
	colir = (char **) malloc(sizeof(char *) * (i + 1));
	if (colir == 0)
	{
		return (0);
	}
	colir = mystok(lineptr, "\n", colir);

	return (colir);
}
