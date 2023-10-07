#include <stdio.h>

/**
 *main - prints alphabet except q and e
 *Return: 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		while (x != 'q' || x != 'e')
	}
	putchar('\n');
	return (0);
}
