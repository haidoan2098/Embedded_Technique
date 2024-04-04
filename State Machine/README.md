# State Machine (Trạng thái máy)

State Machine (Trạng thái máy) trong Embedded được định nghĩa giống với 1 chương trình code, tại 1 thời điểm, chương trình sẽ có 1 trạng thái duy nhất và có thể chuyển sang trạng thái tiếp theo theo tuần tự nhất định.

Khi nào dùng State Machine?             
  Khi Hệ thống có nhiều trạng thái và phức tạp, ta muốn chia thành các phần nhỏ hơn độc lập nhau.                   
  Lợi ích:            
    + Dễ dàng theo dõi quá trình chuyển đổi.            
    + Bảo trì dễ dàng, các trạng thái độc lập nhau.         

Ví dụ: Điều khiển LED bằng 1 nút nhấn.  
Khi nhấn nút 1 lần thì LED_1 sáng, nhấn thêm lần nữa thì LED_2 sáng, nhấn thêm lần nữa thì cả 2 LED chớp tắt, thêm 1 lần nữa thì cả 2 LED tắt.
