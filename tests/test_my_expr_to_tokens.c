/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for my_expr_to_tokens
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(get_tokens_nb, 0_token)
{
    char *expr = "";
    int tokens_nb = 0;

    tokens_nb = get_tokens_nb(expr);
    cr_assert_eq(tokens_nb, 0);
}

Test(get_tokens_nb, 1_token)
{
    char *expr = "32";
    int tokens_nb = 0;

    tokens_nb = get_tokens_nb(expr);
    cr_assert_eq(tokens_nb, 1);
}

Test(get_tokens_nb, 5_tokens)
{
    char *expr = "32+14-5";
    int tokens_nb = 0;

    tokens_nb = get_tokens_nb(expr);
    cr_assert_eq(tokens_nb, 5);
}

Test(get_next_chars_nb, 5_tokens)
{
    char *expr = "32+14-5";
    int j = 0;
    int chars_nb = 0;

    chars_nb = get_next_chars_nb(expr);
    cr_assert_eq(tokens_nb, 2);
}

Test(get_next_chars_nb, 5_tokens)
{
    char *expr = "32+14-5";
    int j = 0;
    int chars_nb = 0;

    chars_nb = get_next_chars_nb(expr);
    cr_assert_eq(tokens_nb, 2);
}