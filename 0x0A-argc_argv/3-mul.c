#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of argument in acommand line.
 * @argv: array of arguments contained in a command line.
 * Return: 0 is success 1 is error.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
