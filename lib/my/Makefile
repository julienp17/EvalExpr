##
## EPITECH PROJECT, 2019
## C Pool EvalExpr
## File description:
## libmy Makefile
##

CC = gcc

SRC = ./my_is_space.c \
	./my_is_digit.c \
	./my_is_empty_str.c \
	./my_strcmp.c \
	./my_strlen.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

HEADERS = my.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(HEADERS) ../../include/

clean:
	  rm -f $(OBJ)

fclean: clean
	  rm -f $(NAME)

re: fclean all
