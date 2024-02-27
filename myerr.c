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

	write(STDOUT_FILENO, av0, j);
	write(STDOUT_FILENO, ": ", 2);
	numwr(i);
	write(STDOUT_FILENO, ": ", 2);
	j = findl(ca0);
	write(STDOUT_FILENO, ca0, j);
	write(STDOUT_FILENO, ": not found", 11);
	write(STDOUT_FILENO, "\n", 1);
}
