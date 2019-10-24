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

int get_next_chars_nb(char const *str, int j)
{
    int i = j;

    if (my_is_digit(str[i])) {
        while (my_is_digit(str[i]))
            i = i + 1;
    } else
        i = i + 1;
    return (i - j);
}

char *get_next_token(char const *expr, int *j)
{
    int i = 0;
    int chars_nb = 0;
    char *token = NULL;

    chars_nb = get_next_chars_nb(expr, *j);
    token = malloc((chars_nb + 1) * sizeof(char));
    if (my_is_digit(expr[*j])) {
        while (my_is_digit(expr[*j])) {
            token[i] = expr[*j];
            i = i + 1;
            *j = *j + 1;
        }
    } else {
        token[i] = expr[*j];
        i = i + 1;
        *j = *j + 1;
    }
    token[i] = '\0';
    return (token);
}