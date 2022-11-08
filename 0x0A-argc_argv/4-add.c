#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function for adding
 * @argc: Number of arguments
 * @argv: The arguments
 * Return: zero or 0ne
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
	}

	else
		sum = 0;

	printf("%d\n", sum);
	return (0);
}
