/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for operations with only dividing
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(only_div, 2d2)
{
    char const *str = "2/2";
    int expected = 1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_div, 2dm2)
{
    char const *str = "2/-2";
    int expected = -1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_div, 18d16)
{
    char const *str = "18/16";
    int expected = 1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_div, 16d18)
{
    char const *str = "16/18";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_div, 18dm16)
{
    char const *str = "18/-16";
    int expected = -1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_div, 0d42)
{
    char const *str = "0/42";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_div, 000d42)
{
    char const *str = "000/42";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_div, very_long_product)
{
    char const *str = "13868196/3837813";
    int expected = 3;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_div, very_long_product_tm1)
{
    char const *str = "138378913/-1";
    int expected = -138378913;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}