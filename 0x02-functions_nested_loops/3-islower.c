#include "main.h"

/**
 *_islower - returns 1 for lowercase; 0 otherwise
 *@c: the parameter
 *Return: 1 for lowercase; 0 otherwise
 */

int _islower(int c)
{
	if  (c >= 'a' || c <= 'z')
	{
		return (1);
	}	
	else 
		return (0);
}

