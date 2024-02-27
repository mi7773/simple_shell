#include <string.h>
#include "main.h"

/**
 * mystok - draft
 * @s: draft
 * @d: draft
 * @r: draft
 * Return: draft
 */
char **mystok(char *s, char *d, char **r)
{
	char *str = 0;
	int i;

	str = strtok(s, d);
	i = 0;
	while (str)
	{
		r[i] = str;
		str = strtok(0, d);
		i++;
	}
	r[i] = 0;

	return (r);
}
