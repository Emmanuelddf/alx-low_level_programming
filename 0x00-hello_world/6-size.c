#include <stdio.h>

/**
 * main -Prints "Size of a char: 1 byte(s)
 * Size of an int: 4 byte(s)
 * Size of a long int: 4 byte(s)
 * Size of a long long int: 8 byte(s)
 * Size of a float: 4 byte(s)"
 *
 * Return: 0 if exited properly, non-zero if otherwise
 */
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long int);
	int longlongSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of a char: %d byte(s)\n", charSize);
	printf("Size of an int: %d byte(s)\n", intSize);
	printf("Size of a long int: %d byte(s)\n", longSize);
	printf("Size of a long long int: %d byte(s)\n", longlongSize);
	printf("Size of a float: %d byte(s)\n", floatSize);
	return (0);
}
