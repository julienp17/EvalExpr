/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Returns a denominator with the same number of digits as the given int
*/

int my_intlen(int nb);

int my_get_denominator(int const nb)
{
    int i = 0;
    int denominator = 1;

    while (i < my_intlen(nb) - 1) {
        denominator = denominator * 10;
        i = i + 1;
    }
    return (denominator);
}