#include <stdio.h>

/**
 *main - prints out numbers 1-9
 *Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%1d", i);
		putchar('\n');
	}
	return (0);
}
