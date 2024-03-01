#include "main.h"

/**
 * geten - draft
 * @gpr: draft
 * @en: draft
 * Return: draft
 */
char *geten(char *gpr, char *en)
{
	int i;

	if (!gpr)
	{
		*en = 0;
		return (en);
	}
	i = 0;
	while (gpr[i])
	{
		en[i] = gpr[i];
		i++;
	}
	en[i] = 0;

	return (en);
}
