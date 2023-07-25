#include "header.h"

int g_solutions;

void	print_board2(int board[9][9])
{
	printf("\n");
	for (int i = 0; i < 9; i++)
	{
		if (i == 3 || i == 6)
			printf("---------------------\n");
		for (int j = 0; j < 9; j++)
		{
			printf("%d ", board[i][j]);
			if (j == 2 || j == 5)
				printf("| ");
		}
		printf("\n");
	}
	printf("\n");
}

int main(int ac, char **av)
{
	if (ac > 2)
	{
		printf("too much arguments\n");
		return (0);
	}
	int **boardp;
	int board[9][9];
	if (ac == 2)
		boardp = parsing(av[1]);
	else
		boardp = parsing("board");
	g_solutions = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			board[i][j] = boardp[i][j];
	}
	solve(board, 0);
	printf("Number of solutions : %d\n", g_solutions);
	return (0);
}
