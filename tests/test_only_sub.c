/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for operations with only subbing
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(only_sub, 2m2)
{
    char const str[] = "2-2";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, m2m2)
{
    char const str[] = "-2-2";
    int expected = -4;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, 18m16)
{
    char const str[] = "18-16";
    int expected = 2;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, m18m16)
{
    char const str[] = "-18-16";
    int expected = -34;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, 16m18)
{
    char const str[] = "16-18";
    int expected = -2;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, m0m1m2m3m4m5m6m7m8m9)
{
    char const str[] = "-0-1-2-3-4-5-6-7-8-9";
    int expected = -45;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, 0m0)
{
    char const str[] = "0-0";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, m0m0)
{
    char const str[] = "-0-0";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, m000m0000000)
{
    char const str[] = "-000-0000000";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, all_kinds_of_minus_signs_test_1)
{
    char const str[] = "-2*-2-((4-3)-6)-(7-8)-4";
    int expected = 6;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, all_kinds_of_minus_signs_test2)
{
    char str[] = "((((((((((((((((((((((2-2)-2)))))))))))))))))))))";
    int expected = -2;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, all_kinds_of_minus_signs_test3)
{
    char str[] = "42-84-(3-6)";
    int expected = -39;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_sub, very_long_difference)
{
    char const str[] = "-76672319-173347183";
    int expected = -250019502;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}