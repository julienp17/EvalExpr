/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Returns the result of an expression as an integer
*/

#include <stddef.h>
#include "my.h"
#include "queue.h"

int eval_expr(char const *str)
{
    queue_t *output_queue = NULL;

    output_queue = shunting_yard(my_strdup_ns(str));
    return (eval_stack(&output_queue));
}
