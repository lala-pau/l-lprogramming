#include "main.h"

/**
 *times_table - prints out 9 times table from 0
 *Return: nothing
 */
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		j++;
		}
	_putchar('\n');
	i++;
	}
}

