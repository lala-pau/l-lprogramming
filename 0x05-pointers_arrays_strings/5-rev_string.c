#include "main.h"
#include "string.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
**/

void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	int j = 0;
	char temp;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}
