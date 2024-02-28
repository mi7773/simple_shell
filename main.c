#include <unistd.h>
#include "main.h"

/**
 * main - draft
 * @ac: draft
 * @av: draft
 * @en: draft
 * Return: draft
 */
int main(int ac, char **av, char **en)
{
	int r = 0;
	(void) ac;
	(void) en;

	if (isatty(STDIN_FILENO))
	{
		r = active(av[0]);
	}
	else
	{
		r = nactive(av[0]);
	}

	return (r);
}
