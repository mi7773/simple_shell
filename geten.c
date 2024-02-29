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
		return (0);

	i = 0;
	while (gpr[i])
	{
		en[i] = gpr[i];
		i++;
	}
	en[i] = 0;

	return (en);
}
