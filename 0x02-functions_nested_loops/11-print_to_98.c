#include "main.h"

/**
 *print_to_98 - prints out digit from input number to 98
 *@n: parameter
 *Return: list of number
 */
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
}
