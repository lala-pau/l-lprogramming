#include <stdio.h>

/**
 *main - prints out alphabet in reverse
 *Return: 0 (success)
 */

int main(void)
{
	int x;
	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');		
	return (0);
}
