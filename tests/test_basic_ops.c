/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for basic operations
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(basic_ops, test_1)
{
    char const *str = "2+2-4*5/6";
    int expected = 1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(basic_ops, test_2)
{
    char const *str = "1+2-3*4/5%%6";
    int expected = 1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(basic_ops, test_3)
{
    char const *str = "(2+6)*4";
    int expected = 32;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(basic_ops, test_4)
{
    char const *str = "4*2+8-(3/2)";
    int expected = 15;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(basic_ops, test_5)
{
    char const *str = "2+29/6*12";
    int expected = 50;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(basic_ops, test_6)
{
    char const *str = "7656-492%%17/(2-6*4%%1)";
    int expected = 7648;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(basic_ops, test_7)
{
    char const *str = "3/2-(3/2)*(3/2)+3/2";
    int expected = 1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(basic_ops, test_8)
{
    char const *str = "2+650-(492/(2*6))+(460*8)%%88/12";
    int expected = 617;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(basic_ops, test_9)
{
    char const *str = "8+68-(77*(12-3)/4)-(69+999)%%2*4";
    int expected = -97;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}