/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for normal operations
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(ops, test_1)
{
    char const str[] = "2+2-4*5/6";
    int expected = 1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_2)
{
    char const str[] = "1+2-3*4/5%6";
    int expected = 1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_3)
{
    char const str[] = "(2+6)*4";
    int expected = 32;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_4)
{
    char const str[] = "4*2+8-(3/2)";
    int expected = 15;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_5)
{
    char const str[] = "2+29/6*12";
    int expected = 50;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_6)
{
    char const str[] = "7656-492%17/(2-6*4%1)";
    int expected = 7648;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_7)
{
    char const str[] = "3/2-(3/2)*(3/2)+3/2";
    int expected = 1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_8)
{
    char const str[] = "2+650-(492/(2*6))+(460*8)%88/12";
    int expected = 617;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_9)
{
    char const str[] = "8+68-(77*(12-3)/4)-(69+999)%2*4";
    int expected = -97;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_2p2_lots_of_parentheses)
{
    char const str[] = "(((((((((((((((((((((((((2+2)))))))))))))))))))))))))";
    int expected = 4;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_int_max)
{
    char const str[] = "2147483647";
    int expected = 2147483647;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(ops, test_int_min)
{
    char const str[] = "-2147483648";
    int expected = -2147483648;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(error, test_10)
{
    char const str[] = "87*(8413*78/(9-0*(7795-2)/74)-85)*2";
    int expected = 12671898;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}
