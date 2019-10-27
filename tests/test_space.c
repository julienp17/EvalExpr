/*
** EPITECH PROJECT, 2019
** test_space
** File description:
** unit test space
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(space, 7_p9)
{
    char const str[] = "7 +9";
    int expected = 16;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(space, 7p_9)
{
    char const str[] = "7+ 9";
    int expected = 16;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(space, _7_p_9)
{
    char const str[] = " 7 + 9";
    int expected = 16;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(space, _7_p_9_)
{
    char const str[] = " 7 + 9 ";
    int expected = 16;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(space, _7p9_)
{
    char const str[] = " 7+9 ";
    int expected = 16;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(space, 7_p_9)
{
    char const str[] = "7 + 9";
    int expected = 16;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(space, 7__p__9)
{
    char const str[] = "7                +                               9";
    int expected = 16;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}


Test(space, parentest)
{
    char const str[] = "14 *(9+7 +(01 -9  ))";
    int expected = 112;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(space, divspace)
{
    char const str[] = "4/ 5/   (7/9 +           7            -9) /8     *3+1";
    int expected = 1;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(space, megaspace)
{
    char const str[] = "42 -1 +9 -1                                        *8";
    int expected = 42;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}






