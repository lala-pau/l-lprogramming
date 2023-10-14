#include "main.h"

/**
 *_islower - returns 1 for lowercase; 0 otherwise
 *@c: the parameter
 *Return: 1 for lowercase; 0 otherwise
 */

int _islower(int c)
{
	if  (c >= 97 || c <= 122)
	{
		return (1);
	}
	return (0);
}

