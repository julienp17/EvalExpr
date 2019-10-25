/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for operations with only adding
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(only_add, 2_2)
{
    char const str[] = "2+2";
    int expected = 4;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_add, 2_18)
{
    char const str[] = "2+18";
    int expected = 20;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_add, 18_18)
{
    char const str[] = "18+18";
    int expected = 36;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_add, 0_1_2_3_4_5_6_7_8_9)
{
    char const str[] = "0+1+2+3+4+5+6+7+8+9";
    int expected = 45;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_add, 0_0)
{
    char const str[] = "0+0";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_add, 000_0000000)
{
    char const str[] = "000+0000000";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_add, very_long_sum)
{
    char const str[] = "74648582+248948294";
    int expected = 323596876;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}