#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * coarr - draft
 * @buf: draft
 * Return: draft
 */
char **coarr(char *buf)
{
	char **ca = 0;
	int i;

	i = cdel(buf, ' ');
	ca = (char **) malloc(sizeof(char *) * (i + 2));
	if (ca == 0)
	{
		return (0);
	}
	ca = mystok(buf, " \n", ca);

	return (ca);
}
