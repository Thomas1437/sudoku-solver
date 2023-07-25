#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>

extern int g_solutions;

/* PARSING.C */
void	free_failed_board(int **board, int index);
void	error(char flag);
int		**create_board(void);
int		**parsing(char *file_name);
/* PARSING.C */

/* SOLVER.C */
int		row_valid(int row[9], int index);
int		col_valid(int board[9][9], int row, int col);
int		square_valid(int board[9][9], int row, int col);
int		number_valid(int board[9][9], int number, int row, int col);
int		solve(int board[9][9], int pos_number);
/*SOLVER.C*/

/* MAIN.C */
void	print_board(int **board);
void	print_board2(int board[9][9]);
int		main(int ac, char **av);
/* MAIN.C */

#endif