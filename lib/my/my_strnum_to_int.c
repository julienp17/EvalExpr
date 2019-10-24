/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Converts a numerical string into an integer
*/

int my_strlen(char const *str);

int my_strnum_to_int(char *str)
{
    int i = 0;
    int nb = 0;
    int is_neg = 0;

    if (str[0] == '-') {
        is_neg = 1;
        i = i + 1;
    }
    while (i < my_strlen(str)) {
        nb = nb * 10 + str[i] - '0';
        i = i + 1;
    }
    if (is_neg)
        nb = nb * -1;
    return (nb);
}