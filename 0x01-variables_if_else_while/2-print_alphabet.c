#include <stdio.h>

/**
 *main - prints out a letter
 *Return: 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}
	return (0);
}
