/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for struct queue
*/

#include <criterion/criterion.h>
#include "queue.h"

Test(queue_insert, two_inserts)
{
    queue_t *queue = NULL;
    char *str = "bonjour";
    char *str2 = "je m'appelle atchapa mathias et je suis un male alpha";

    queue_insert(&queue, str);
    cr_assert_not_null(queue);
    cr_assert_str_eq(queue->data, str);
    queue_insert(&queue, str2);
    cr_assert_str_eq(queue->next->data, str2);
}