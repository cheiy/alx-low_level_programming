#include "main.h"
/**
 * print_chessboard - Prints the chessboard.
 * @a: pointer to array holding chess pieces.
 *
 * Description: Prints the chessboard.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	row = 0;
	col = 0;
	while (row < 8)
	{
		while (col < 8)
		{
			if (col == 7)
			{
				_putchar(a[row][col]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[row][col]);
			}
			col++;
		}
		col = 0;
		row++;
	}
}

