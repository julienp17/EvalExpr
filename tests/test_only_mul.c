/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for operations with only multiplying
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(only_mul, 2t2)
{
    char const *str = "2*2";
    int expected = 4;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, 2tm2)
{
    char const *str = "2*-2";
    int expected = -4;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, 18t16)
{
    char const *str = "18*16";
    int expected = 288;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, 16t18)
{
    char const *str = "16*18";
    int expected = 288;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, m16t18)
{
    char const *str = "-16*18";
    int expected = -288;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, 0t1t2t3t4t5t6t7t8t9)
{
    char const *str = "0*1*2*3*4*5*6*7*8*9";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, 1t2t3t4t5t6t7t8t9)
{
    char const *str = "1*2*3*4*5*6*7*8*9";
    int expected = 362880;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, 0t0)
{
    char const *str = "0*0";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, 000t0000000)
{
    char const *str = "000*0000000";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, very_long_product)
{
    char const *str = "1763*13831";
    int expected = 24384053;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mul, very_long_product_tm1)
{
    char const *str = "386389928*-1";
    int expected = -386389928;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}