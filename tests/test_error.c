/*
** EPITECH PROJECT, 2019
** test_error
** File description:
** test if there is an error
*/

#include <criterion/criterion.h>
#include "evalexpr.h"

Test(error, just_number)
{
    char const str[] = "56";
    int expected = 56;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(error, letter)
{
    char const str[] = "a";
    int expected = 0;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(error, letter_number)
{
    char const str[] = "a+9";
    int expected = 9;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

Test(error, letters_number)
{
    char const str[] = "svhbdvhbdsvjsbvja+89-8";
    int expected = 81;
    int res = 0;

    res = eval_expr(str);
    cr_assert_eq(res, expected);
}

