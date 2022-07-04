#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * @void: Empty parameter list for main.
 *
 * Description: Prints the alphabet in lower case
 * can only use putchar
 *
 * Return: 0 if exited properly, non-zero if otherwise
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
