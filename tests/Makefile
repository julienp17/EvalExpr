##
## EPITECH PROJECT, 2019
## C Pool EvalExpr
## File description:
## Unit tests Makefile
##

CC = gcc

SRC = ../src/

SRC_UT = ./test

OBJ = $(SRC_UT:.c=.o)

OBJ_SRC = $(SRC:.c=.o)

CFLAGS = -I../include/ -W -Wall -Wextra -Werror --coverage

LDFLAGS = -lcriterion -lgcov --coverage

DBFLAGS = -g -g3 -ggdb

NAME = ../unit_tests

all: $(NAME)

$(NAME): lib $(OBJ) $(OBJ_SRC)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_SRC) $(CFLAGS) $(LDFLAGS)
	rm -f $(SRC_UT:.c=.gcno)
	rm -f $(SRC_UT:.c=.gcda)
	rm -f $(SRC_UT:.c=.gcov)
	$(NAME)

lib:
	make -C ../lib/my/ all

clean:
	rm -f $(SRC_UT:.c=.o)
	rm -f $(SRC:.c=.gcno)
	rm -f $(SRC:.c=.gcda)

fclean: clean
	rm -f $(NAME)

re: fclean all
