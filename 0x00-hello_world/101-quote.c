#include <stdio.h>
#include <sys/syscall.h>

/**
 *main - Prints a quote
 *Dora Korpar's quote
 *dated 2015 October 19th
 *Return: 1(Success)
 */
int main(void)
{
	const char msg[] = "and that piece of art is useful\" -
		 "Dora Korpar, 2015 - 10 - 19\n";
	syscall (SYS_write, 1, msg, sizeof(msg)));
	return(1);
}

