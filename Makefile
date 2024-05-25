NAME = libftprintf.a
CC = cc
AR = ar rc
LIB = ranlib
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c
OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I. $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	@make -C libft
	@cp libft/libft.a .
	@mv libft.a ${NAME}
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME}

clean:
	@make clean -C libft
	rm -f ${OBJS}

fclean:		clean
	rm -f libft/libft.a
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
