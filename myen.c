#include "main.h"

/**
 * myen - draft
 * @ca0: draft
 * Return: draft
 */
int myen(char *ca0)
{
	int i;

	i = 0;
	while (ca0[i] == "env="[i])
	{
		i++;
		if ("env="[i] == '=')
		{
			return (3);
		}
	}

	return (0);
}
