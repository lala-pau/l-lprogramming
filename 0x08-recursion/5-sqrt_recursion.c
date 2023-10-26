#include "main.h"

/**
 * sqrt_a -  square root of input number
 * @a: parameter
 * @b: parameter
 * Return: square root value
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - main function for square root
 * @n: parameter
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
