 #include "main.h"

/**
 * _memset - fills a block of memory with a value
 * @s: starting address of memory
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: chanaged aarray with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
