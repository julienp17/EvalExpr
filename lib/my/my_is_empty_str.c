/*
** EPITECH PROJECT, 2019
** C Pool InfinAdd
** File description:
** Checks if there's nothing in a string
*/

#include <stddef.h>
#include "my.h"

int my_is_empty_str(char const *str)
{
    if (str == 0 || str == NULL)
        return (1);
    if (my_strcmp(str, "") == 0 || my_strcmp(str, " ") == 0)
        return (1);
    return (0);
}
