/* Circular Queue (Hàng đợi vòng): Là CTDT thực hiện theo cơ chế FIFO. Là phiên bản cải tiến của Hàng đợi tiêu chuẩn.
Sự khác nhau:
 - Queue: Sau khi ptử bị đẩy ra thì vị trí bị đẩy sẽ ko được tái sử dụng khi tất cả bị trong Queue bị đẩy hết ra.
 - Circular Queue: Vị trí phần tử bị đẩy ra sẽ được tái sử dụng.
Queue được sử dụng khi nào? 
  Khi ta cần 1 vùng nhớ nhỏ mà vẫn xử lí dữ liệu với đầu vào liên tục.
*/

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
