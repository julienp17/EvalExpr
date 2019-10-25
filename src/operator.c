/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Handles operators
*/

#include <stddef.h>
#include "my.h"
#include "operators.h"

int is_operator(char const *expr)
{
    char const *operators = OPERATORS;
    int i = 0;

    if (my_strlen(expr) != 1)
        return (0);
    while (i < my_strlen(operators)) {
        if (expr[0] == operators[i])
            return (1);
        i = i + 1;
    }
    return (0);
}

operator_t get_operator(char const symbol)
{
    int i = 0;
    operator_t const operators[] = {
        {'+', 2, &my_add},
        {'-', 2, &my_sub},
        {'*', 3, &my_mul},
        {'/', 3, &my_div},
        {'%', 3, &my_mod}
    };

    while (i < OPERATORS_NB) {
        if (symbol == operators[i].symbol)
            return (operators[i]);
        i = i + 1;
    }
    return (operators[i]);
}