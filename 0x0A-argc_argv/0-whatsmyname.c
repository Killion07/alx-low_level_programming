#include <stdio.h>
/**
 * main - Function for printing file name
 * @argc: integer for compilatin char
 * @argv: characters in compilation
 * Return: null
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
