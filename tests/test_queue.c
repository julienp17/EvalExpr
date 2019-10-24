/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Unit tests for struct queue
*/

#include <criterion/criterion.h>
#include "queue.h"

Test(queue_push, two_push)
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

Test(queue_pop, empty_queue)
{
    queue_t *queue = NULL;
    char *str = NULL;

    str = queue_pop(&queue);
    cr_assert_null(str);
}

Test(queue_pop, one_pop)
{
    queue_t *queue = NULL;
    char *actual = NULL;
    char *expected = "bonsoir";
    char *str2 = "je suis tristan bourgeois mais je suis pauvre";

    queue_push(&queue, expected);
    queue_push(&queue, str2);
    actual = queue_pop(&queue);
    cr_assert_str_eq(actual, expected);
}