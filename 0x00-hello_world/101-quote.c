#include <stdio.h>

/**
 * main - Prints "and that piece of art is useful - Dora Korpar, 2015-10-19"
 *
 * Return: 0 if exited properly, non-zero if otherwise
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
