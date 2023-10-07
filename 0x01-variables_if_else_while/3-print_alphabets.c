#include <stdio.h>
#include <ctype.h>

/**
 *main - prints upper and lowercase alphabet
 *Return: 0 (success)
 */
int main (void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar(toupper(x));
	}
	return (0);
}
