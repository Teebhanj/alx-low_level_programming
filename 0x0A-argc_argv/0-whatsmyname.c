#include <stdio.h>

/**
 * main - prints the name of program, followed by a new line.
 * @argc: argument count.
 * @argv: array that contian the program line argument.
 * Return: return 0.
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
