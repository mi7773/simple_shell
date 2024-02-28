#include "main.h"

/**
 * findl - draft
 * @str: draft
 * Return: draft
 */
int findl(char *str)
{
	int i, j;

	if (str == 0)
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
		j++;
	}

	return (j);
}
