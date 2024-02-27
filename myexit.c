#include "main.h"

/**
 * myexit - draft
 * @ca0: draft
 * Return: draft
 */
int myexit(char *ca0)
{
	int i;

	if (ca0 == 0)
	{
		return (0);
	}
	i = 0;
	while (ca0[i] == "exit="[i])
	{
		i++;
		if ("exit="[i] == '=')
		{
			return (2);
		}
	}

	return (0);
}
