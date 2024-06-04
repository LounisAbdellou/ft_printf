NAME = libftprintf.a
INCLUDES = ./includes/
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putunbr_fd.c ft_unbrlen.c ft_puthex_fd.c ft_hexlen.c
OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I $(INCLUDES) $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	@make -C libft
	@cp libft/libft.a .
	@mv libft.a ${NAME}
	${AR} ${NAME} ${OBJS}

clean:
	@make clean -C libft
	rm -f ${OBJS}

fclean:		clean
	rm -f libft/libft.a
	rm -f ${NAME}

re:	fclean all

libft: 
	@make -C libft
	@cp libft/libft.a .
	@make fclean -C libft

.PHONY: all clean fclean re libft
