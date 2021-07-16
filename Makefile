##
## EPITECH PROJECT, 2021
## makefile
## File description:
## make
##

SRC = 	src/main.c \
		src/struct.c	\
		src/maths.c	\
		src/pal.c	\
		src/error.c	\

NAME = palindrome

CFLAGS = -g -Wall

CPPFLAGS =  -I./include/ -L./lib -lmy -lm

CC = gcc

all:
	make -C lib/my
	$(CC) $(SRC) $(CFLAGS) $(CPPFLAGS) -o $(NAME)

clean:
	make -C lib/my clean
	rm -rf $(NAME)

fclean: clean
	make -C lib/my fclean
	rm -rf src/*.o
	rm -rf src/*~

re: fclean all

.PHONY: all clean fclean re