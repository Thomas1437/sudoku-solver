#include "header.h"

int main(void)
{
	int **board = parsing();
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			printf("%d ", board[i][j]);
		printf("\n");
	}
	return (0);
}
