MY_SOURCES = main.c \
			 parsing.c \
			 solver.c

MY_OBJECTS = ${MY_SOURCES:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = solve

RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${MY_OBJECTS}
	${CC} -o ${NAME} ${MY_OBJECTS}

all:    ${NAME}

clean:
	${RM} ${MY_OBJECTS}

fclean:    clean
	${RM} ${NAME}

re:    fclean all

.PHONY:    all clean fclean re
