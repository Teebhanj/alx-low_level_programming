#include "main.h"

/**
 * print_numbers - printsnumbers from 0 to 9
 * followedby new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
