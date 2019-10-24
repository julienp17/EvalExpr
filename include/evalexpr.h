/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Header file for EvalExpr
*/

#ifndef __DEF_EVALEXPR__
    #define __DEF_EVALEXPR__

    int eval_expr(char const *str);

    char **expr_to_tokens(char const *expr);
    int get_tokens_nb(char const *str);
    int get_next_chars_nb(char const *str, int j);
    char *get_next_token(char const *str, int *j);
#endif
