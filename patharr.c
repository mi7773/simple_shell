#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * patharr - draft
 * @ca0: draft
 * Return: draft
 */
char **patharr(char *ca0)
{
	char **pa = 0, *str = 0, *gpr = getpath(), *en;
	int i, j, k;

	i = findl(gpr);
	en = (char *) malloc(sizeof(char) * (i + 1));
	if (en == 0)
	{
		return (0);
	}
	en = geten(gpr, en);
	i = cdel(gpr, ':');
	pa = (char **) malloc(sizeof(char *) * (i + 2));
	if (pa == 0)
	{
		return (0);
	}
	i = findl(ca0);
	str = strtok(en, ":");
	j = 0;
	while (str && ca0 != 0)
	{
		k = findl(str);
		pa[j] = (char *) malloc(sizeof(char) * (i + k + 2));
		if (pa[j] == 0)
		{
			return (0);
		}
		myswap(pa[j], str);
		pa[j][k] = '/';
		myswap(&pa[j][k + 1], ca0);
		pa[j][k + i + 1] = '\0';
		str = strtok(0, ":");
		j++;
	}
	pa[j] = 0;
	free(en);

	return (pa);
}
