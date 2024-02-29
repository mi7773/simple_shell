#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "main.h"

/**
 * cmd_lines - command lines with newline
 * @lineptr: read line
 * Return: command lines in array
*/
char **cmd_lines(char *lineptr)
{
	int lines = 0;
	char **ca = 0;

	lines = cdel(lineptr, '\n');
	ca = (char **) malloc(sizeof(char *) * (lines + 2));
	if (ca == 0)
	{
		return (0);
	}
	ca = mystok(lineptr, "\n", ca);
	return (ca);
}

/**
 * nactive - draft
 * @av0: draft
 * Return: draft
 */
int nactive(char *av0)
{
	int i = 0, r = 0;
	char *lineptr = 0;
	char **ca = 0, **pa = 0, **cla = 0;
	(void) av0;

	lineptr = myread();
	cla = cmd_lines(lineptr);
	while (cla[i] != NULL)
	{
		ca = coarr(cla[i]);
		pa = patharr(ca[i]);

		if (mystat(ca, pa) == 3)
			penv();
		else if (mystat(ca, pa) == 0)
			myexe(ca, av0);
		else if (mystat(ca, pa) == 2)
		{
			free(cla);
			free(lineptr);
			myfree(ca, pa);
			if (i == 0)
				return (0);
			return (i + 1);
		}
		else if (ca[0] != 0)
		{
			perror(av0);
			r = 127;
		}
		i++;
		myfree(ca, pa);
	}
	free(cla);
	free(lineptr);
	myfree(ca, pa);

	return (r);
}
