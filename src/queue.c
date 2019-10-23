/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Handles a queue linked list
*/

#include <stddef.h>
#include <stdlib.h>
#include "queue.h"

void queue_push(queue_t **queue_front, void *data)
{
    queue_t *new_element = NULL;
    queue_t *current_element = NULL;

    new_element = malloc(sizeof(*new_element));
    new_element->data = data;
    new_element->next = NULL;
    if ((*queue_front) == NULL)
        (*queue_front) = new_element;
    else {
        current_element = (*queue_front);
        while (current_element->next != NULL)
            current_element = current_element->next;
        current_element->next = new_element;
    }
}

void *queue_pop(queue_t **queue_front)
{
    queue_t *to_pop = NULL;
    void *data = NULL;

    if ((*queue_front) == NULL)
        return (NULL);
    to_pop = (*queue_front);
    data = to_pop->data;
    (*queue_front) = (*queue_front)->next;
    free(to_pop);
    return (data);
}