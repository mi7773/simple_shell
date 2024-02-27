#include <stdlib.h>
#include "main.h"

/**
 * myfree - draft
 * @ca: draft
 * @pa: draft
 */
void myfree(char **ca, char **pa)
{
	int i;

	free(ca);
	i = 0;
	while (pa[i])
	{
		free(pa[i]);
		i++;
	}
	free(pa);
}
