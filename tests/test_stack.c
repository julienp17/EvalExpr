/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for struct stack
*/

#include <criterion/criterion.h>
#include "stack.h"

Test(stack_push, two_inserts_str_str)
{
    stack_t *stack = NULL;
    char *str = "bonjour";
    char *str2 = "je m'appelle pause julien et je suis un male omega";

    stack_push(&stack, str);
    cr_assert_not_null(stack);
    cr_assert_str_eq(stack->data, str);
    stack_push(&stack, str2);
    cr_assert_str_eq(stack->data, str2);
    cr_assert_str_eq(stack->next->data, str);
}

Test(stack_push, two_inserts_char_int)
{
    stack_t *stack = NULL;
    char my_char = '-';
    int nb = 42;

    stack_push(&stack, my_char);
    cr_assert_not_null(stack);
    cr_assert_eq(stack->data, my_char);
    stack_push(&stack, nb);
    cr_assert_eq(stack->data, nb);
    cr_assert_eq(stack->next->data, my_char);
}

Test(stack_pop, empty_stack)
{
    stack_t *stack = NULL;
    char *str = NULL;

    str = stack_pop(&stack);
    cr_assert_null(str);
}

Test(stack_pop, one_pop_str_str)
{
    stack_t *stack = NULL;
    char *actual = NULL;
    char *expected = "bonsoir";
    char *str2 = "je suis tristan bourgeois mais je suis pauvre";

    stack_push(&stack, str2);
    stack_push(&stack, expected);
    actual = stack_pop(&stack);
    cr_assert_str_eq(actual, expected);
}

Test(stack_pop, two_pop_char_int)
{
    stack_t *stack = NULL;
    int actual = 0;
    char my_char = '*';
    int nb = 38;

    stack_push(&stack, my_char);
    stack_push(&stack, nb);
    actual = stack_pop(&stack);
    cr_assert_eq(actual, nb);
    actual = stack_pop(&stack);
    cr_assert_eq(actual, my_char);
}