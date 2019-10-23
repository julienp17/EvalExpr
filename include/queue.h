/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Structure queue
*/

#ifndef __DEF_QUEUE__
    #define __DEF_QUEUE__

    typedef struct queue {
        void *data;
        struct queue *next;
    } queue_t;

    void queue_insert(queue_t **queue_front, void *data);
    queue_t *queue_pop();
#endif
