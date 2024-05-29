NAME = libftprintf.a
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_nbrlen.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c -I. $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean:		clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
