#include <stdio.h>
/**
 * main - function for printing arguments
 * @argc: number of arguments
 * @argv: The arguments
 * Return: Return zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
