
# Circular Queue (Hàng đợi vòng)

Queue (Hàng đợi): Là CTDL thực hiện theo cơ chế FIFO (First In Firt Out - Vào trước ra trước).      
- Đẩy dữ liệu vào cuối hàng và lấy ra từ đầu hàng.    
- Hàng đợi được sử dụng khi ta muốn 1 vùng nhớ nhỏ, có thể xử lí dữ liệu 1 cách liên tục mà ko bị mất dữ liệu hay ghi đè (Mảng ko làm được).
Hạn chế của Queue: Khi ta lấy dữ liệu thì ta ko thể tái sử dụng vị trí đó khi chưa lấy dữ liệu ở trong hàng ra hết.
-> Khắc phục: Circular Queue

Circular Queue (Hàng đợi vòng): Là phiên bản cải tiến của Hàng đợi tiêu chuẩn. Khi lấy dữ liệu ra thì ta có thể tái sử dụng vị trí đó khiến cho việc dữ liệu đẩy vào và xử lí gần như liên tục.


Bài tập
1. Thiết kế 1 chương trình 0,5s đẩy dữ liệu vào Circular Queue. Sau đó đọc dữ liệu từ Queue ra và đẩy vào mảng gồm 20 phần tử.
Khi đầy 20 phần tử thì xuất ra màn hình. Tiếp tục với các dữ liệu khác.     

2. Thiết kế Circular Queue với 1 phần tử queue là 1 struct như sau: 
typedef struct{
    int length;
    uint8_t arr[20];
} node_t;   
Mỗi lần truyền vào queue vào 1 node thì đọc ra node đó để xử lí.