.PHONY: all clean

all: app

app: main.o ft_atoi.o
	gcc main.o ft_atoi.o -o app

main.o: main.c
	gcc -Wall -Wextra -Werror -c main.c -o main.o

ft_atoi.o: ft_atoi.c
	gcc -Wall -Wextra -Werror -c ft_atoi.c -o ft_atoi.o

clean:
	rm -rf *.o app
