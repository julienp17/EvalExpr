##
## EPITECH PROJECT, 2019
## C Pool EvalExpr
## File description:
## Project root Makefile
##

CC = gcc

SRC = ./src/eval_expr.c \
	./src/main.c

OBJ = $(SRC:.c=.o)

CFLAGS = -I./include/ -W -Wall -Wextra -Werror

LDFLAGS =

DBFLAGS = -g -g3 -ggdb

NAME = ./eval_expr

all: $(NAME)

$(NAME): lib $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

lib:
	make -C ./lib/my/ all

tests_run: $(NAME)
	make -C ./tests/ all

clean:
	rm -f $(OBJ)
	make -C ./lib/my/ clean
	make -C ./tests/ clean

fclean: clean
	rm -f $(NAME)
	make -C ./tests/ fclean
	make -C ./tests/ fclean

re: fclean all
