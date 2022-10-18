#include <stdio.h>

/**
 * main - Print alphabet fro z to a
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
