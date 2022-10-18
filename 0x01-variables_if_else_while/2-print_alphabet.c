#include <stdio.h>

/**
 * main - Print alphabets a to z in lowercase
 *
 * Return: 0
*/
int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
