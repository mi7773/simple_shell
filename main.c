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
	(void) ac;
	(void) en;

	if (isatty(STDIN_FILENO))
	{
		active(av[0]);
	}
	else
	{
		nactive(av[0]);
	}

	return (0);
}
