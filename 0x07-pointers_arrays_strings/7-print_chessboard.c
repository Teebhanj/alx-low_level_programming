#include "main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: 2d array of chars
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	/*variables*/
	int n, j;

	n = 0;
	while (n < 8) /*repeat number*/
	{
		j = 0;

		while (j < 8)
		{
			_putchar (a[n][j]);
			j++;
		}
		_putchar ('\n'); /*prints new line*/
		n++;
	}
}
