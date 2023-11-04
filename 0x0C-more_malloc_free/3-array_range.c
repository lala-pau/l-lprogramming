#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array from @min to @max
 * @min: parameter
 * @max: parameter
 * Return: n
 */
int *array_range(int min, int max)
{
	int i, j;
	int *n;

	if (min > max)
		return (NULL);

	j = max - min + 1;
	n = malloc(sizeof(int) * j);

	if  (n == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		n[i] = min;
	}
	return (n);
}
