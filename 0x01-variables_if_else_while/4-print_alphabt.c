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
		if (x != 'e' && x != 'q')
		putchar(x);
	}
	putchar('\n');
	return (0);
}
