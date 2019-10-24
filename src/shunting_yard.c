/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Transforms an infix mathematical expression to a postfix one
*/

#include <stddef.h>
#include "my.h"
#include "evalexpr.h"
#include "queue.h"
#include "stack.h"
#include "operators.h"

void get_output_queue(char **tokens, int i, queue_t **queue, stack_t **stack);
#include <stdio.h>
queue_t *shunting_yard(char const *expr)
{
    int i = 0;
    char **tokens = NULL;
    queue_t *queue = NULL;
    stack_t *stack = NULL;

    tokens = expr_to_tokens(expr);
    get_output_queue(tokens, i, &queue, &stack);
    while (stack != NULL)
        queue_push(&queue, stack_pop(&stack));
    return (queue);
}

void get_output_queue(char **tokens, int i, queue_t **queue, stack_t **stack)
{
    if (tokens[i] == NULL)
        return;
    if (my_str_isnum(tokens[i]))
        queue_push(queue, tokens[i]);
    if (is_operator(tokens[i][0])) {
        while ((*stack) != NULL &&
               has_ge_precedence((*stack)->data[0], tokens[i][0]) &&
               !is_left_paren((*stack)->data[0]))
            queue_push(queue, stack_pop(stack));
        stack_push(stack, tokens[i]);
    }
    if (is_left_paren(tokens[i][0]))
        stack_push(stack, tokens[i]);
    if (is_right_paren(tokens[i][0])) {
        while (!is_left_paren((*stack)->data[0]))
            queue_push(queue, stack_pop(stack));
        if (is_left_paren((*stack)->data[0]))
            stack_pop(stack);
    }
    get_output_queue(tokens, i + 1, queue, stack);
}

int has_ge_precedence(char symbol1, char symbol2)
{
    operator_t op1 = get_operator(symbol1);
    operator_t op2 = get_operator(symbol2);

    return (op1.precedence >= op2.precedence);
}

int is_left_paren(char const my_char)
{
    return (my_char == '(');
}

int is_right_paren(char const my_char)
{
    return (my_char == ')');
}