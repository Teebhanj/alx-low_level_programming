#include <stdio.h>

/**
 * main - prints arguments it receives.
 * @argc: number of argument in a command line
 * @argv: array of arguments contained in the command line
 * Return: return 0 when done.
 */

int main(int argc, char argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%S\n", agrv[i]);
	}
	return (0);
}
