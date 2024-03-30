#include "Circular_Queue.h"
#include <stdio.h>

int main()
{   
    //Tạo ra Queue chứa được 5 phần tử
    queue_t *queue = Creat_Queue(5);
    EnQueue(queue, 1);  //Đẩy
    EnQueue(queue, 2);  //Đẩy
    EnQueue(queue, 3);  //Đẩy
    EnQueue(queue, 4);  //Đẩy
    EnQueue(queue, 5);  //Đẩy

    int value;
    //Lấy ptu đầu tên ra khỏi Queue <=> 1
    DeQueue(queue, &value);

    //Phần tử đầu tiên bây giờ sẽ là 2
    printf("%d\n", queue->array[queue->front]);

    //Đẩy
    EnQueue(queue, 6);

    //Phần tử cuối cùng bây giờ sẽ là 6
    printf("%d\n", queue->array[queue->rear]);


    return 0;
}
