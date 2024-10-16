CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Name of the library
NAME = libft.a

# Source files using the 'find' command
SRCS = $(shell find . -name "*.c")

# Object files
OBJS = $(SRCS:.c=.o)

# All target: builds the library
all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

# Clean target: removes object files
clean:
		rm -f $(OBJS)

# Fclean target: removes object files and the library
fclean: clean
		rm -f $(NAME)

# Re target: cleans and rebuilds the library
re: fclean all

# Phony targets to avoid conflicts with files named 'all', 'clean', etc.
.PHONY: all clean fclean re