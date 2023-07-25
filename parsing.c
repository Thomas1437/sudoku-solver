#include "header.h"

void	free_failed_board(int **board, int index)
{
	for (int i = 0; i < index; i++)
		free(board[i]);
	free(board);
}

void	error(char flag)
{
	if (flag == 'm')
		printf("malloc failed\n");
	else if (flag == 'f')
		printf("file opening failed\n");
	else if (flag == 'b')
		printf("map error\n");
	else
		printf("unknown flag error\n");
	exit(1);
}

int **create_board(void)
{
	int **board;

	board = (int **)malloc(9 * sizeof(int *));
	if (!board)
		error('m');
	for (int i = 0; i < 9; i++)
	{
		board[i] = (int *)malloc(9 * sizeof(int));
		if (!board[i])
		{
			free_failed_board(board, i);
			error('m');
		}
	}
	return (board);
}

int **parsing(char *file_name)
{
	FILE	*file;
	char	c;
	int		**board;
	int		i;
	int		j;

	file = fopen(file_name, "r");
	if (!file)
		error('f');
	board = create_board();
	i = 0;
	j = 0;
	c = fgetc(file);
	while (c != EOF)
	{
		if ((c < '0' || c > '9' || i >= 9 || j >= 9) && c != '\n')
			error('b');
		else if (c == '\n')
		{
			i++;
			j = 0;
		}
		else
		{
			board[i][j] = c - '0';
			j++;
		}
		c = fgetc(file);
	}
	fclose(file);
	return (board);
}
