#include "main.h"

/**
 *jack_bauer- prints out time throughout 24 hours
 *@c: parameter
 *Return: value of parameter
 */
void jack_bauer(void)
{
	float i = 00;

	while (i < 24)
	{
		float j = 0;

		while (j < 60)
		{
			_putchar(j);
			_putchar(':');
			j++;
		}
	_putchar(i);
	i++;
	}
}
