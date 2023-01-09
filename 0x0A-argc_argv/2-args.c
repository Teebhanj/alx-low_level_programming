#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of argument in a command line
 * @argv: array of arguments contained in the command line
 * Return: return 0 when done.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
