#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H
//--------------------------------------------------------
#include <stdbool.h>
#include <stdlib.h>

typedef enum{
    QUEUE_FALL = -1,
    QUEUE_OK = 0
} queue_status_t;

typedef struct{
    int front;
    int rear;
    int capacity;
    int used;
    int *array;
} queue_t;

queue_t *Creat_Queue(int capacity);
queue_status_t EnQueue(queue_t *queue, int value);
queue_status_t DeQueue(queue_t *queue, int *value);

//--------------------------------------------------------
#endif // CIRCULAR_QUEUE_H
