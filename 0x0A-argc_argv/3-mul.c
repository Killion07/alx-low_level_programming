#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function for multiplication
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Return zero or one
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}

