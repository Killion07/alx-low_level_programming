#include <stdio.h>
/**
 * main - function for fizz buzz test
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		}
		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
