NAME = libft.a
INCLUDES = ../includes/
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_nbrlen.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_abs.c ft_isalpha.c \
	   ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_islower.c \
	   ft_isupper.c ft_tolower.c ft_toupper.c ft_atoi.c \
	   ft_strncmp.c ft_memcmp.c ft_itoa.c \
	   ft_strndup.c ft_strnstr.c ft_strdup.c \
	   ft_strnew.c ft_strcat.c ft_substr.c \
	   ft_strjoin.c ft_strmapi.c ft_strchr.c ft_strrchr.c \
	   *ft_split.c ft_strtrim.c ft_strrev.c ft_putendl_fd.c \
	   ft_putchar_fd.c ft_bzero.c ft_putnbr_fd.c ft_putstr_fd.c \
	   ft_striteri.c ft_calloc.c ft_memchr.c \
	   ft_memcpy.c ft_memmove.c ft_memset.c ft_lstsize.c \
	   ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c \
	   ft_lstlast.c ft_lstdelone.c ft_lstclear.c \
	   ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c -I $(INCLUDES) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
