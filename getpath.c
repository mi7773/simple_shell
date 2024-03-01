#include "main.h"

/**
 * getpath - draft
 * Return: draft
 */
char *getpath()
{
	int i, j;

	i = 0;

	while (environ[i])
	{
		j = 0;
		while (environ[i][j] == "PATH="[j])
		{
			if (environ[i][j] == '=')
			{
				return (&environ[i][j + 1]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
