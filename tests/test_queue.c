/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for struct queue
*/

#include <criterion/criterion.h>
#include "queue.h"

Test(queue_push, two_inserts_str_str)
{
    queue_t *queue = NULL;
    char *str = "bonjour";
    char *str2 = "je m'appelle atchapa mathias et je suis un male alpha";

    queue_push(&queue, str);
    cr_assert_not_null(queue);
    cr_assert_str_eq(queue->data, str);
    queue_push(&queue, str2);
    cr_assert_str_eq(queue->next->data, str2);
}

Test(queue_push, two_inserts_char_int)
{
    queue_t *queue = NULL;
    char my_char = '+';
    int nb = 13;

    queue_push(&queue, my_char);
    cr_assert_not_null(queue);
    cr_assert_eq(queue->data, my_char);
    queue_push(&queue, nb);
    cr_assert_eq(queue->next->data, nb);
}

Test(queue_pop, empty_queue)
{
    queue_t *queue = NULL;
    char *str = NULL;

    str = queue_pop(&queue);
    cr_assert_null(str);
}