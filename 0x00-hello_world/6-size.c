#include <stdio.h>

/**
 * main - This code sends to stdout
 * The sizes of the various types
 *Return: 0
 */
int main(void)
{
	int type_int;
	float type_float;
	char type_char;
	long int type_l_int;
	long long int type_l_l_int;

	printf("Size of a char: %lu byte(s)\n", sizeof(type_char));
	printf("Size of an int: %lu byte(s)\n", sizeof(type_int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(type_l_int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(type_l_l_int));
	printf("Size of a float: %lu byte(s)\n", sizeof(type_float));
	return (0);
}
