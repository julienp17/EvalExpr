/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Returns the result of an expression as an integer
*/

#include <stddef.h>
#include "evalexpr.h"
#include "my.h"
#include "queue.h"

int eval_expr(char const *str)
{
    queue_t *output_queue = NULL;
    char *expr = NULL;
    char **tokens = NULL;

    expr = my_strdup_ns(str);
    if (get_tokens_nb(expr) == 1)
        return (my_strnum_to_int(expr));
    tokens = expr_to_tokens(expr);
    output_queue = shunting_yard(tokens);
    return (eval_stack(&output_queue));
}
