#include <unistd.h>
#include "main.h"

/**
 * penv - draft
 */
void penv(void)
{
	int i, j;

	if (!environ)
		return;

	i = 0;
	while (environ[i])
	{
		j = findl(environ[i]);
		write(STDOUT_FILENO, environ[i], j);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
