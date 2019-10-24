##
## EPITECH PROJECT, 2019
## C Pool EvalExpr
## File description:
## Unit tests Makefile
##

CC = gcc

SRC = ../src/eval_expr.c \
	../src/queue.c \
	../src/stack.c \
	../src/expr_to_tokens.c

SRC_UT = ./test_only_add.c \
	./test_only_sub.c \
	./test_only_mul.c \
	./test_only_div.c \
	./test_only_mod.c \
	./test_ops.c \
	./test_queue.c \
	./test_stack.c \
	./test_my_expr_to_tokens.c

OBJ = $(SRC_UT:.c=.o)

OBJ_SRC = $(SRC:.c=.o)

CFLAGS = -I../include/ -W -Wall -Wextra -Werror --coverage

LDFLAGS = -L../lib/my -lmy -lcriterion -lgcov --coverage

DBFLAGS = -g -g3 -ggdb

NAME = ../unit_tests

all: $(NAME)

$(NAME): libmy $(OBJ) $(OBJ_SRC)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_SRC) $(CFLAGS) $(LDFLAGS)
	rm -f $(SRC_UT:.c=.gcno)
	rm -f *.gcda
	rm -f $(SRC_UT:.c=.gcov)
	$(NAME)

libmy:
	make -C ../lib/my/ all

clean:
	rm -f $(SRC_UT:.c=.o)
	rm -f $(SRC:.c=.gcno)
	rm -f $(SRC:.c=.gcda)

fclean: clean
	rm -f $(NAME)

re: fclean all
