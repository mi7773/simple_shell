#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * mystat - draft
 * @ca: draft
 * @pa: draft
 * Return: draft
 */
int mystat(char **ca, char **pa)
{
	struct stat st;

	
	if (ca[0] == 0)
	{
		return (1);
	}
	if (myen(ca[0]) == 3)
	{
		return (3);
	}
	else if (myexit(ca[0]) == 2)
	{
		return (2);
	}
	else if (stat(ca[0], &st) == 0)
	{
		return (0);
	}
	else
	{
		int i = 0;

		while (pa[i])
		{
			if (stat(pa[i], &st) == 0)
			{
				ca[0] = pa[i];
				return (0);
			}
			i++;
		}
	}
	return (1);
}
