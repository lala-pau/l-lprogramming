#include <stdio.h>
#include <ctype.h>

/**
 *main - prints upper and lowercase alphabet
 *Return: 0 (success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
