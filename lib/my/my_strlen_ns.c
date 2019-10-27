/*
** EPITECH PROJECT, 2019
** C Pool Eval Expr
** File description:
** Returns the length of the given string with no spaces
*/

int my_strlen_ns(char const *src)
{
    int i = 0;
    int len = 0;

    while (src[i] != '\0') {
        if (src[i] != ' ')
            len = len + 1;
        i = i + 1;
    }
    return (len);
}