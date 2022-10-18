#include <stdio.h>

/**
 * main - Print alphabets in both small and capital letters
 *
 * Return: 0
 */

int main(void)
{
	char al;
	char AL;

	for (al = 'a' ; al <= 'z' ; al++)
		putchar(al);
	for (AL = 'A' ; AL <= 'Z' ; AL++)
		putchar(AL);
	putchar('\n');

	return (0);
}
