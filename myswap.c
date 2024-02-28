#include "main.h"

/**
 * myswap - draft
 * @de: draft
 * @so: draft
 */
void myswap(char *de, char *so)
{
	int i;

	if (so == 0)
	{
		*de = 0;
		return;
	}
	i = 0;
	while (so[i])
	{
		de[i] = so[i];
		i++;
	}
}
