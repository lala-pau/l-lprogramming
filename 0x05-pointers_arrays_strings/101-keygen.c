#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: Always 0 (Success)
**/

int main(void)
{
	int sum;
	char z;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		z = rand() % 128;
		sum += z;
		putchar(z);
	}
	putchar(2772 - sum);
	return (0);
}
