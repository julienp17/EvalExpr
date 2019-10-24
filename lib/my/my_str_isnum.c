/*
** EPITECH PROJECT, 2019
** my_str_isnum.c
** File description:
** Return 1 if the string is all numeric, 0 otherwise
*/

int my_is_digit(char my_char);

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!my_is_digit(str[i]))
            return (0);
        i = i + 1;
    }
    return (1);
}
