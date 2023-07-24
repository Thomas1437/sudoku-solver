#include "header.h"

int row_valid(int row[9], int index)
{
	for (int i = 0; i < 9; i++)
	{
		if (row[index] == row[i] && i != index)
			return (0);
	}
	return (1);
}

int col_valid(int board[9][9], int row, int col)
{
	for (int i = 0; i < 9; i++)
	{
		if (board[i][col] == board[row][col] && i != row)
			return (0);
	}
	return (1);
}

int square_valid(int board[9][9], int row, int col)
{
	int row_start;
	// int row_end;
	int col_start;
	// int col_end;

	row_start = row / 3;
	// row_end = row_start + 3;
	col_start = col / 3;
	// col_end = col_start + 3;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[row_start + i][col_start + j] == board[row][col])
				if (row_start + i != row || col_start + j != col)
		}
	}
}