/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Returns the number of digits in an integer
*/

int my_intlen(int nb)
{
    int intlen = 0;

    if (nb == 0)
        return (1);
    while (nb != 0) {
        intlen = intlen + 1;
        nb = nb / 10;
    }
    return (intlen);
}