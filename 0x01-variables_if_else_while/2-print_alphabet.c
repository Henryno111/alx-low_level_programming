#include <stdio.h>

/**
 * main - print the alphabets a-z
 *
 * return: Always 0 (Success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
