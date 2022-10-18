#include <stdio.h>
/**
 * main - print 16 digits
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char ch;

	{
	for (num = 0 ; num < 10 ; num++)
		putchar((num % 10) + '0');
	for (ch = 'a' ; ch < 'g' ; ch++)
		putchar(ch);
	}
	return (0);
}

