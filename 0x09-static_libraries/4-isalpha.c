#include "main.h"

/**
 *_isalpha - prints ou
 *@c: parameter
 *Return: 1 for letter; 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
