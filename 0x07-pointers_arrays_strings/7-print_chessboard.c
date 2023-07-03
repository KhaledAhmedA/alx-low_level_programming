#include "main.h"
/**
 * print_chessboard - a function print multi dimention array of given length
 * @a: array argument
 * Return: no return value
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar ('\n');
	}
}
