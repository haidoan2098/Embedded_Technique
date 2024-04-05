/* Thiết kế 1 CT 500ms đẩy 1 data vào Queue.
   Sau đó đọc dữ liệu từ Queue và đẩy vào mảng gồm 20 phần tử.
   Khi đầy thì xuất mảng và tiếp tục */

#include "Circular_Queue.h"
//-------------------------------------------------------
#include <stdio.h>
#include <time.h>

int array[20] = {0};
int cnt = 0;

void Array_Out(int *array, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void msleep(unsigned int milliseconds) {
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000;
    ts.tv_nsec = (milliseconds % 1000) * 1000000;
    nanosleep(&ts, NULL);
}

int main(){
    queue_t *queue = Creat_Queue(5);

    static int i = 0;
    while(1){
        // Đẩy dữ liệu vào hàng đợi
        EnQueue(queue, i);
        i++;
        msleep(500);

        // Đọc dữ liệu từ hàng đợi
        int value;
        if (DeQueue(queue, &value) == QUEUE_OK){
            array[cnt] = value;
            cnt++;
        } else {
            printf("Failed to get value from queue.\n");
        }

        if (cnt == 20){
            Array_Out(array, 20);
            cnt = 0;
        }
    }

    return 0;
}
