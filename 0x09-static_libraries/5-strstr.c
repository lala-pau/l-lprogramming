#include "main.h"

/**
 * _strstr - finds the needle in the haysatck...lol
 * @haystack: parameter
 * @needle: parameter
 * Return: 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
