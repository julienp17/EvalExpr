/*
** EPITECH PROJECT, 2019
** shunting_yard
** File description:
** translate the equation
*/

#include <stddef.h>

int is_left_paren(char const my_char)
{
    return (my_char == '(');
}

int is_right_paren(char const my_char)
{
    return (my_char == ')');
}

char *shunting_yard(char *expr)
{
    int i = 0;
    char **tokens = NULL;
    queue_t *queue = NULL;
    stack_t *stack = NULL;

    tokens = my_expr_to_tokens(expr);
    while (tokens[i] != NULL) {
        if (my_str_isnum(tokens[i][0]))
            queue_push(&queue, tokens[i]);
        if (is_operator(tokens[i][0])) {
            while (has_ge_precedence(stack->data, tokens[i][0]) && !is_left_paren(stack->data))
                queue_push(&queue, stack_pop(&stack));
            stack_push(&stack, tokens[i]);
        }
        if (is_left_paren(tokens[i][0])) {
            stack_push(&stack, tokens[i]);
        }
        if (is_right_paren(tokens[i][0])) {
            while (!is_left_paren(stack->data))
                queue_push(&queue, stack_pop(&stack));
            if (is_left_paren(stack->data))
                stack_pop(&stack);
        }
        i = i + 1;
    }
    while (stack->data != NULL)
        queue_push(&queue, stack_pop(&stack));
    return(queue);
}
