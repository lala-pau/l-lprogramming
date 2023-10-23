#include "main.h"

/**
 * _memcpy -  copies memory area
 * @dest: memory storage
 * @src: copied memory
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i;

	for (i = n; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
