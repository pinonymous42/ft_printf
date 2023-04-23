NAME = libftprintf.a
SRCS = ft_printf.c ft_putadress.c ft_putbasenbr.c ft_putchar.c ft_putstr.c ft_strlen.c ft_putnbr.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re