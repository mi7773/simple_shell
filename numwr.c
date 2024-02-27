#include <unistd.h>
#include "main.h"

/**
 * numwr - draft
 * @i: draft
 */
void numwr(int i)
{
	int j, k, l;
	char m;

	j = i;
	k = 0;
	while (j)
	{
		j /= 10;
		k++;
	}
	j = 1;
	for (l = 1; l < k; l++)
	{
		j *= 10;
	}
	while (k)
	{
		m = (i / j) + 48;
		write(STDOUT_FILENO, &m, 1);
		i = i % j;
		j = j / 10;
		k--;
	}
}
