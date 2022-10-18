#include <stdio.h>

/**
 * main - Print alphabets a to z in lowercase
 *
 * Return 0
*/
int main(void)
{
	char al = 'a';
	while (al < 'z')
	{
		putchar("%c", al);
		al++;
	}
	putchar("\n");
	
	return (0);
}
