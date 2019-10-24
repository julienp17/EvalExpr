/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Header files for operators
*/

#ifndef __DEF_OPERATORS__
    #define __DEF_OPERATORS__

    #define OPERATORS "+-*/%"

    typedef struct operator {
        char symbol;
        int precedence;
        int (*operation)(int, int);
    } operator_t;

    int is_operator(char const my_char);
    operator_t *get_operation(char my_char);

    int my_add(int a, int b);
    int my_sub(int a, int b);
    int my_mul(int a, int b);
    int my_div(int a, int b);
    int my_mod(int a, int b);

#endif