#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>


/*PARSING.C*/
void	free_failed_board(int **board, int index);
void	error(char flag);
int		**create_board(void);
int		**parsing(void);
/*PARSING.C*/


#endif