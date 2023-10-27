#include "main.h"

/**
 *_abs - displays absolute value of input
 *@i: value entered
 *Return: result of abs
 */
int _abs(int i)
{
	if (i == 0)
	{
		i = 0;
	}
	else if (i > 0)
	{
		i = i;
	}
	else if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
