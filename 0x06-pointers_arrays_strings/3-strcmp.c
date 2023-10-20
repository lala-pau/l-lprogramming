#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: parameter
 * @s2: parameter
 * Return: value of b
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
