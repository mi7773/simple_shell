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

	if (isatty(STDIN_FILENO))
	{
		active(av[0], en);
	}
	else
	{
		nactive(av[0], en);
	}

	return (0);
}
