#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H
//--------------------------------------------------------
#include <stdlib.h>
#include <stdbool.h>

typedef enum{
    QUEUE_FAIL = -1,
    QUEUE_OK = 0
} queue_status_t;

typedef struct{
    int front;        //Chỉ số phần tử đầu
    int rear;         //Chỉ số phần tử cuối
    int capacity;     //Số lượng phần tử tối đa trong Queue
    int used;         //Số lượng phần tử đã sử dụng
    int *array;       //Mảng tượng trưng hay chỗ chứa dữ liệu bị đẩy ra để xử lí
} queue_t;

//Cấp phát động vùng nhớ để lưu trữ Queue
queue_t *Creat_Queue(int capacity);

//Đẩy dữ liệu vào Queue
queue_status_t EnQueue(queue_t *queue, int value);

//Lấy dữ liệu ra khỏi Queue
queue_status_t DeQueue(queue_t *queue, int *value);

//--------------------------------------------------------
#endif // CIRCULAR_QUEUE_H
