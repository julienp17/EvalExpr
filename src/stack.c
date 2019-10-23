/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Handles a stack linked list
*/

#include <stddef.h>
#include <stdlib.h>
#include "stack.h"

void stack_push(stack_t **stack_top, void *data)
{
    stack_t *element = NULL;

    element = malloc(sizeof(*element));
    element->data = data;
    element->next = (*stack_top);
    (*stack_top) = element;
}

void *stack_pop(stack_t **stack_top)
{
    stack_t *to_pop = NULL;
    void *data = NULL;

    if ((*stack_top) == NULL)
        return (NULL);
    to_pop = (*stack_top);
    data = to_pop->data;
    (*stack_top) = (*stack_top)->next;
    free(to_pop);
    return (data);
}