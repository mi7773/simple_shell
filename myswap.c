#include "main.h"

/**
 * myswap - draft
 * @de: draft
 * @so: draft
 */
void myswap(char *de, char *so)
{
	if (so == 0)
	{
		return;
	}
	while (*so)
	{
		*de = *so;
		de++;
		so++;
	}
}
