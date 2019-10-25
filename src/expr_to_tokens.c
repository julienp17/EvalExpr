/*
** EPITECH PROJECT, 2019
** C Pool Day
** File description:
** Splits a string into words.
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include "evalexpr.h"
#include "operators.h"

static int minus_is_operator(char const *expr, int i);

char **expr_to_tokens(char const *expr)
{
    int i = 0;
    int j = 0;
    int tokens_nb = 0;
    char **tokens = 0;

    tokens_nb = get_tokens_nb(expr);
    tokens = malloc((tokens_nb + 1) * sizeof(char*));
    while (i < tokens_nb) {
        tokens[i] = get_next_token(expr, &j);
        i = i + 1;
    }
    tokens[i] = NULL;
    return (tokens);
}

int get_tokens_nb(char const *expr)
{
    int i = 0;
    int tokens_nb = 0;

    while (expr[i] != '\0') {
        if (expr[i] == '-' && !minus_is_operator(expr, i))
            i = i + 1;
        if (my_is_digit(expr[i])) {
            tokens_nb = tokens_nb + 1;
            while (my_is_digit(expr[i]))
                i = i + 1;
        } else {
            tokens_nb = tokens_nb + 1;
            i = i + 1;
        }
    }
    return (tokens_nb);
}

int get_next_chars_nb(char const *expr, int j)
{
    int i = j;

    if (expr[i] == '-' && !minus_is_operator(expr, i))
        i = i + 1;
    if (my_is_digit(expr[i])) {
        while (my_is_digit(expr[i]))
            i = i + 1;
    } else
        return (1);
    return (i - j);
}

static int minus_is_operator(char const *expr, int i)
{
    if (i == 0)
        return (0);
    if (my_is_digit(expr[(i - 1)]))
        return (1);
    else
        return (0);
}

char *get_next_token(char const *expr, int *j)
{
    int i = 0;
    int chars_nb = 0;
    char *token = NULL;

    chars_nb = get_next_chars_nb(expr, *j);
    token = malloc((chars_nb + 1) * sizeof(char));
    while (i < chars_nb) {
        token[i] = expr[*j];
        i = i + 1;
        *j = *j + 1;
    }
    token[i] = '\0';
    return (token);
}