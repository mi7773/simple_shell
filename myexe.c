#include <sys/wait.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * myexe - draft
 * @ca: draft
 * @av0: draft
 */
void myexe(char **ca, char *av0)
{
	pid_t frpid;
	int status;

	frpid = fork();
	if (frpid == -1)
	{
	}
	else if (frpid == 0)
	{
		int er;

		er = execve(ca[0], ca, environ);
		if (er == -1)
		{
			perror(av0);
			exit(127);
		}
	}
	else
	{
		wait(&status);
	}
}
