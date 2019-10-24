/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Structure stack
*/

#ifndef __DEF_STACK__
    #define __DEF_STACK__

    typedef struct stack {
        char *data;
        struct stack *next;
    } stack_t;

    void stack_push(stack_t **stack_top, char *data);
    char *stack_pop(stack_t **stack_top);
#endif
