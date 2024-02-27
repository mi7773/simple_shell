#include <unistd.h>
#include "main.h"

/**
 * myerr - draft
 * @i: draft
 * @av0: draft
 * @ca0: draft
 */
void myerr(int i, char *av0, char *ca0)
{
	int j = findl(av0);
	(void) i;
	(void) ca0;

	write(STDOUT_FILENO, av0, j);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "No such file or directory", 25);
	write(STDOUT_FILENO, "\n", 1);
}
