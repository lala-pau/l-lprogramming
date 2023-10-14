#include "main.h"

/**
 *print_sign - prints out
 *@n: parameter
 *Return: 0 for zero; 1 - positive; -1 -negative
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (1);
}

