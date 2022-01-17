CC = gcc
FLAGS = -Wall -Wextra -Werror
src = ft_printf/libftprintf.a

all : server client
client : ft_atoi.c ft_client.c
	cd ft_printf && make
	$(CC) $(FLAGS) ft_atoi.c ft_client.c $(src) -o client
server : ft_server.c
	cd ft_printf && make
	$(CC) $(FLAGS) ft_server.c $(src) -o server
clean :
	rm -rf client server
	cd ft_printf && make clean
fclean : clean
	cd ft_printf && make fclean
re : clean all
	cd ft_printf && make re