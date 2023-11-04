#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - points to new allocated memory space
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *c;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	c = malloc(sizeof(char) * (i = j = 1));
	if (c == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		c[k] = s1[k];
	for (k = 0; k < j; k++)
		c[k + i] = s2[k];
	c[i + j] = s2[k];
	return (c);
}
