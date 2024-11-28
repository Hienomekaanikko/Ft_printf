CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_write_chr.c ft_printf.c ft_itoa.c ft_write_nbrs.c ft_utoa.c ft_write_hex.c ft_write_ptr.c
OBJS = $(SRC:.c=.o)
NAME = libftprintf.a

$(NAME): $(OBJS)
	ar rcs $@ $^

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
