#include <stdio.h>
/**
 * main - Function for printing number of argumentts
 * @argc: count of arguments
 * @argv: The arguments themselves
 * Return: Returnsa zero
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
