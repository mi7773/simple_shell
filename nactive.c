#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "main.h"

/**
 * nactive - draft
 * @av0: draft
 * @en: draft
 * Return: draft
 */
int nactive(char *av0, char **en)
{
	char *lineptr = 0, **ca = 0, **pa = 0, **colir;
	int i = 1, j;

	lineptr = myread();
	colir = coli(lineptr);
	j = 0;
	while (colir[j])
	{
		ca = coarr(colir[j]);
		pa = patharr(ca[0]);
		if (mystat(ca, pa) == 3)
		{
			penv();
		}
		else if (mystat(ca, pa) == 0)
		{
			myexe(ca, en);
		}
		else if (mystat(ca, pa) == 2)
		{
			myfree(ca, pa);
			break;
		}
		else if (ca[0] != 0)
		{
			myerr(i, av0, ca[0]);
		}
		j++;
		i++;
		myfree(ca, pa);
	}
	free(colir);
	free(lineptr);

	return (0);
}
