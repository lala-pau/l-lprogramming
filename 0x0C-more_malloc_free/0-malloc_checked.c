#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - ends program successfully returning "98" if malloc fails
 * @n: parameter
 * Return: ptr value
 */

void *malloc_checked(unsigned int n)
{
	void *ptr;

	ptr = malloc(n);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
