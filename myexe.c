#include <sys/wait.h>
#include <unistd.h>
#include "main.h"

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
		execve(ca[0], ca, 0);
	}
	else
	{
		wait(&status);
	}
}
