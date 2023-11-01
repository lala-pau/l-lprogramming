#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a duplicate string of str
 * @str: parameter
 * Return: 0
 */

char *_strdup(char *str)
{
	char *d_str;
	unsigned int i;
	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	d_str = malloc(sizeof(char) * (len + 1));

	if (d_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		d_str[i] = str[i];
	}
	d_str[len] = '\0';
	return (d_str);
}
