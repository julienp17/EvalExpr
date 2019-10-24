/*
** EPITECH PROJECT, 2019
** shunting_yard
** File description:
** translate the equation
*/

#include <stddef.h>

char *shunting_yard(char *expr)
{
    int i = 0;
    char **tokens = NULL;
    queue_t *queue = NULL;
    stack_t *stack = NULL;

    tokens = my_expr_to_tokens(expr);
    
    while (tokens[i] != NULL) {
        if (my_str_isnum(tokens[i])) {
            queue_push(&queue, tokens[i]);
        }
        if (my_is_operator(tokens[i])) {
            stack_push(&stack, tokens[i]);
        }
        while (my_is_operator) {
            stack_pop(&queue);
            stack_push(&queue);
        }
    }
    i++;
}
    
            
            
