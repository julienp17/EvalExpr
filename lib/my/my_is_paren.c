/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Returns 1 if the given char is a parenthese, 0 otherwise
*/

int is_left_paren(char const my_char)
{
    return (my_char == '(');
}

int is_right_paren(char const my_char)
{
    return (my_char == ')');
}

int is_paren(char const my_char)
{
    return (is_left_paren(my_char) || is_right_paren(my_char));
}
