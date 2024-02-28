#include "main.h"

/**
 * cdel - draft
 * @str: draft
 * @del: draft
 * Return: draft
 */
int cdel(char *str, char del)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == del)
		{
			j++;
		}
		i++;
	}

	return (j);
}
