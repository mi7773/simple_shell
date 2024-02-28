#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "main.h"

/**
 * active - draft
 * @av0: draft
 * Return: draft
 */
int active(char *av0)
{
	int i = 1, r = 0;
	(void) av0;

	do {
		char *lineptr = 0, **ca = 0, **pa = 0;

		write(STDOUT_FILENO, "$ ", 2);
		lineptr = mygetl();
		if (lineptr == 0)
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}
		ca = coarr(lineptr);
		pa = patharr(ca[0]);
		if (mystat(ca, pa) == 3)
		{
			penv();
		}
		else if (mystat(ca, pa) == 0)
		{
			myexe(ca);
		}
		else if (mystat(ca, pa) == 2)
		{
			free(lineptr);
			myfree(ca, pa);
			break;
		}
		else if (ca[0] != 0)
		{
			perror(ca[0]);
			r = 127;
		}
		free(lineptr);
		myfree(ca, pa);
		i++;
	} while (1);

	return (r);
}
