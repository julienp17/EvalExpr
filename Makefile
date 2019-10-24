##
## EPITECH PROJECT, 2019
## C Pool EvalExpr
## File description:
## Project root Makefile
##

CC = gcc

SRC = ./src/main.c \
	./src/eval_expr.c \
	./src/expr_to_tokens.c \
	./src/operator.c \
	./src/operations.c \
	./src/queue.c \
	./src/stack.c \
	./src/shunting_yard.c \
	./src/stack_evaluator.c

OBJ = $(SRC:.c=.o)

CFLAGS = -I./include/ -W -Wall -Wextra -Werror

LDFLAGS = -L./lib/my -lmy

DBFLAGS = -g -g3 -ggdb

NAME = ./eval_expr

all: $(NAME)

$(NAME): libmy $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

libmy:
	make -C ./lib/my all

tests_run: libmy $(OBJ)
	make -C ./tests/ all

clean:
	rm -f $(OBJ)
	make -C ./lib/my/ clean
	make -C ./tests/ clean

fclean: clean
	rm -f $(NAME)
	make -C ./lib/my/ fclean
	make -C ./tests/ fclean

re: fclean all
