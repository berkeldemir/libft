NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = $(shell find . -name "ft_lst*.c")
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^
	
bonus:
	gcc $(FLAGS) -c $(BONUS)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f  *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re