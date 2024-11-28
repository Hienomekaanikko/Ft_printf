CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf_tests.c
OBJS = $(SRC:.c=.o)
NAME = ft_printf_test

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -L.. -lftprintf

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	@echo "Running the test..."
	./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
