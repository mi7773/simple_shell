#include <sys/wait.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * myexe - draft
 * @ca: draft
 */
void myexe(char **ca)
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
			perror(ca[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
	}
}
