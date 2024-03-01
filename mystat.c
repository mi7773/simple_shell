#include <sys/stat.h>
#include <unistd.h>
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
	size_t size = 0;
	char *cwdr = 0;

	cwdr = getcwd(cwdr, size), chdir("/");
	if (ca[0] == 0)
	{
		chdir(cwdr);
		return (1);
	}
	if (myen(ca[0]) == 3)
	{
		chdir(cwdr);
		return (3);
	}
	else if (myexit(ca[0]) == 2)
	{
		chdir(cwdr);
		return (2);
	}
	else if (stat(ca[0], &st) == 0)
	{
		chdir(cwdr);
		return (0);
	}
	else
	{
		int i = 0;

		while (pa[i])
		{
			if (stat(pa[i], &st) == 0)
			{
				chdir(cwdr), ca[0] = pa[i];
				return (0);
			}
			i++;
		}
	} chdir(cwdr);
	return (1);
}
