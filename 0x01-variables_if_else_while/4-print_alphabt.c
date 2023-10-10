#include <stdio.h>

/**
 *main - prints alphabet except q and e
 *Return: 0 (success)
 */
int main(void)
{
	int x;

	x = 0;
	do {
		
		putchar(x);
		x++;
	}while (x != 'q' || x != 'e');
	putchar('\n');
	return (0);
}
