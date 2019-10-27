/*
** EPITECH PROJECT, 2019
** C Pool Eval Expr
** File description:
** Returns the given string with no spaces
*/

#include <stddef.h>
#include <stdlib.h>

int my_strlen_ns(char const *str);

char *my_strdup_ns(char const *src)
{
    int i = 0;
    int j = 0;
    char *dest = malloc(sizeof(char) * (my_strlen_ns(src) + 1));

    while (src[i] != '\0') {
        if (src[i] != ' ') {
            dest[j] = src[i];
            j = j + 1;
        }
        i = i + 1;
    }
    return (dest);
}