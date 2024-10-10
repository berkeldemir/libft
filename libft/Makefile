NAME = libft.a
COMPILER = gcc
FLAGS = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = $(shell find . -name "ft_lst*.c")
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^
	
%.o : %.c
	$(COMPILER) $(FLAGS)
bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rc $(NAME) *.o
clean:
	/bin/rm -f  *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re



clean:
	rm -rf *.o

fclean:
	???

re:
	rm -rf *.o
	make all

.PHONY: all re clean fclean