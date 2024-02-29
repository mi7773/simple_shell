#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "main.h"

/**
 * nactive - draft
 * @av0: draft
 * Return: draft
 */
int nactive(char *av0)
{
	int i = 1, r = 0;
	(void) av0;

	do {
		char *lineptr = 0, **ca = 0, **pa = 0;

		lineptr = mygetl();
		if (lineptr == 0)
		{
			break;
		}
		ca = coarr(lineptr);
		pa = patharr(ca[0]);
		if (mystat(ca, pa) == 3) /* env */
		{
			r = 0;
			penv();
		}
		else if (mystat(ca, pa) == 0)
		{
			r = myexe(ca, av0);
		}
		else if (mystat(ca, pa) == 2) /* exit */
		{
			free(lineptr);
			myfree(ca, pa);
			break;
		}
		else if (ca[0] != 0)
		{
			perror(av0);
			r = 127;
		}
		free(lineptr);
		myfree(ca, pa);
		i++;
	} while (1);

	return (r);
}
