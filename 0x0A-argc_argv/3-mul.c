#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply arguments and print result
 * @argc: parameter
 * @argv: parameter
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
