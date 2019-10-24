/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Converts an integer into a numerical string
*/

#include <stdlib.h>

int my_intlen(int nb);
int my_get_denominator(int const nb);

char *my_int_to_strnum(int nb)
{
    int i = 0;
    int denominator = my_get_denominator(nb);
    char *strnum = malloc(sizeof(char) * (my_intlen(nb) + 1));

    if (nb < 0) {
        strnum[i] = '-';
        nb = nb * -1;
        i = i + 1;
    }
    while (denominator > 0) {
        strnum[i] = nb / denominator % 10 + '0';
        denominator = denominator / 10;
        i = i + 1;
    }
    strnum[i] = '\0';
    return (strnum);
}
