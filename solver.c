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
	int col_start;

	row_start = row - (row % 3);
	col_start = col - (col % 3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[row_start + i][col_start + j] == board[row][col])
				if (!(row_start + i == row && col_start + j == col))
					return (0);
		}
	}
	return (1);
}

int number_valid(int board[9][9], int number, int row, int col)
{
	int	tmp;
	int	row_col_v;
	int	sq_v;

	tmp = board[row][col];
	board[row][col] = number;
	row_col_v = row_valid(board[row], col) && col_valid(board, row, col);
	sq_v = square_valid(board, row, col);
	board[row][col] = tmp;
	if (row_col_v && sq_v)
		return (1);
	return (0);
}

int	solve(int board[9][9], int pos_number)
{
	int	row;
	int	col;

	if (pos_number >= 81)
	{
		print_board(board);
		return (1);
	}
	if (board[pos_number / 9][pos_number % 9] != 0)
		return (solve(board, pos_number + 1));
	row = pos_number / 9;
	col = pos_number % 9;
	for (int i = 1; i < 10; i++)
	{
		if (number_valid(board, i, row, col))
		{
			board[row][col] = i;
			if (solve(board, pos_number + 1) == 1)
				g_solutions++;
			else
				board[row][col] = 0;
		}
	}
	return (0);
}
