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

	write(STDERR_FILENO, av0, j);
	write(STDERR_FILENO, ": ", 2);
	numwr(i);
	write(STDERR_FILENO, ": ", 2);
	j = findl(ca0);
	write(STDERR_FILENO, ca0, j);
	write(STDERR_FILENO, ": not found", 11);
	write(STDERR_FILENO, "\n", 1);
}
