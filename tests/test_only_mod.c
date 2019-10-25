/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for operations with only dividing
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(only_mod, 2mod2)
{
    char const str[] = "2%2";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mod, 2mod3)
{
    char const str[] = "2%3";
    int expected = 2;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mod, 4mod16)
{
    char const str[] = "4%16";
    int expected = 4;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mod, 18mod16)
{
    char const str[] = "18%16";
    int expected = 2;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mod, 0mod42)
{
    char const str[] = "0%42";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mod, 000mod42)
{
    char const str[] = "000%42";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(only_mod, very_long_modulo)
{
    char const str[] = "173531%37671";
    int expected = 22847;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}