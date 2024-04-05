#include"Circular_Queue.h"

queue_t *Creat_Queue(int capacity){
    queue_t *qt = (queue_t *)malloc(capacity * sizeof(queue_t));
    qt->front = 0;
    qt->rear = -1;
    qt->used = 0;
    qt->capacity = capacity;
    qt->array = (int *)malloc(capacity * sizeof(int));
    return qt;
}

static bool isEmpty(queue_t *queue){
    return (queue->used == 0);
}

static bool isFull(queue_t *queue){
    return (queue->used == queue->capacity);
}

queue_status_t EnQueue(queue_t *queue, int value){
    if (isFull(queue)) return QUEUE_FALL;
    queue->rear = (queue->rear + 1) % (queue->capacity);
    queue->array[queue->rear] = value;
    queue->used++;
    return QUEUE_OK;
}

queue_status_t DeQueue(queue_t *queue, int *value){
    if (isEmpty(queue)) return QUEUE_FALL;
    *value = queue->array[queue->front];
    queue->front = (queue->front + 1) % (queue->capacity);
    queue->used--;
    return QUEUE_OK;
}


