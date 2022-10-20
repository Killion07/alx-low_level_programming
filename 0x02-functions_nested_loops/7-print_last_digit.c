#include "main.h"
/**
 *print_last_digit - Function for printing last digit
 *@n: Integer to be printed
 *
 *Return: Value of last integer
 */
int print_last_digit(int n)
{
	int a;

	a = _abs(n) % 10;
	_putchar(a  + '0');

	return (a);
}
