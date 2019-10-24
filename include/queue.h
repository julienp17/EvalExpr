/*
** EPITECH PROJECT, 2019
** C Pool EvalExpr
** File description:
** Structure queue
*/

#ifndef __DEF_QUEUE__
    #define __DEF_QUEUE__

    typedef struct queue {
        char *data;
        struct queue *next;
    } queue_t;

    void queue_push(queue_t **queue_front, char *data);
    char *queue_pop(queue_t **queue_front);

    queue_t *shunting_yard(char const *expr);
    int eval_stack(queue_t **queue);
#endif
