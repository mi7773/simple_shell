#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * myexe - draft
 * @ca: draft
 * @en: draft
 */
void myexe(char **ca, char **en)
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
		er = execve(ca[0], ca, en);
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
