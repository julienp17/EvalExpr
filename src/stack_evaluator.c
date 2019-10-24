/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Handles postfix mathematical expressions
*/

#include <stddef.h>
#include "my.h"
#include "queue.h"
#include "stack.h"
#include "operators.h"

char *get_op_res_str(char *strnum1, operator_t operator, char *strnum2);

int eval_stack(queue_t *queue)
{
    stack_t *stack = NULL;
    char *res = NULL;
    char *strnum1 = NULL;
    char *strnum2 = NULL;
    char *op = NULL;

    while (queue != NULL) {
        while (my_str_isnum(queue->data))
            stack_push(&stack, queue_pop(&queue));
        op = queue_pop(&queue);
        strnum2 = stack_pop(&stack);
        strnum1 = stack_pop(&stack);
        res = get_op_res_str(strnum1, get_operator(op[0]), strnum2);
        stack_push(&stack, res);
    }
    return (my_strnum_to_int(res));
}

char *get_op_res_str(char *strnum1, operator_t operator, char *strnum2)
{
    int nb1 = my_strnum_to_int(strnum1);
    int nb2 = my_strnum_to_int(strnum2);
    int res = operator.operation(nb1, nb2);

    return (my_int_to_strnum(res));
}