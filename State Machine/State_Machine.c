/* State Machine (Trạng thái máy): Là một mô hình tính toán dựa trên một máy giả định được tạo thành từ một hoặc
nhiều trạng thái. Nó chuyển từ trạng thái này sang trạng thái khác theo tuần tự nhất định.
Khi nào nên dùng State Machine?
    Hệ thống có nhiều trạng thái và phức tạp, ta muốn chia thành các phần nhỏ hơn độc lập nhau.
Lợi ích: 
    + Dễ dàng theo dõi quá trình chuyển đổi.
    + Bảo trì dễ dàng, các trạng thái độc lập nhau. 
Ví dụ: Bằng một nút nhấn, khi nhấn nút 1 lần thì mở Mode_1, nhấn lần 2 thì mở Mode_2, nhấn lần 3 thì mở Mode_3, nhấn lần 4 thì 3 Mode Off */

#include <stdio.h>
#include <stdint.h>

typedef enum{
    MODE_1, //<=> 0
    MODE_2, //<=> 1
    MODE_3, //<=> 2
    MODE_OFF
} MODE_T;

MODE_T mode_t; //mode_t mặc định là 0


//-----------FUNC MODE---------------------
void func_mode_1(){
    printf("Turn on mode 1\n");
}
void func_mode_2(){
    printf("Turn on mode 2\n");
}
void func_mode_3(){
    printf("Turn on mode 3\n");
}
void func_mode_off(){
    printf("3 MODE OFF\n");
}


//------------Nhấn nút thì nó làm gì--------------
void button_press_hold(){
    //Gỉa sử nhấn nút là 1 nhả là 0
    int button; 
    printf("Neu nhan nut thi chon 1 \n");
    scanf("%d", &button);

    if(button == 1){
    switch (mode_t){
        case MODE_1:
            func_mode_1();
            break;
        case MODE_2:
            func_mode_2();
            break;
        case MODE_3:
            func_mode_3();
            break;    
        case MODE_OFF:
            func_mode_off();
            break; 
        default:
            break;
    }
    }
}


//---------------Đổi trạng thái-----------------
void change_state(){
    switch (mode_t){
        case MODE_1:
            mode_t = MODE_2;
            break;
        case MODE_2:
            mode_t = MODE_3;
            break;
        case MODE_3:
            mode_t = MODE_OFF;
            break;
        case MODE_OFF:
            mode_t = MODE_1;
            break;
        default:
            break;
    }
}


int main(){  
    while (1) {
        button_press_hold();
        change_state();       
    }  

    return 0;
}