##
## EPITECH PROJECT, 2019
## C Pool EvalExpr
## File description:
## libmy Makefile
##

CC = gcc

SRC = ./my_get_denominator.c \
	./my_int_to_strnum.c \
	./my_intlen.c \
	./my_is_digit.c \
	./my_put_nbr.c \
	./my_putchar.c \
	./my_putstr.c \
	./my_str_isnum.c \
	./my_strdup_ns.c \
	./my_strcmp.c \
	./my_strlen.c \
	./my_strlen_ns.c \
	./my_strnum_to_int.c \
	./my_is_paren.c

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
	  rm -f ../$(NAME)
	  rm -f ../../include/my.h

re: fclean all
