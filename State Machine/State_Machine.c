#include <stdio.h>
#include <stdint.h>

typedef enum{
    MODE_1,   //<=> 0
    MODE_2,   //<=> 1
    MODE_3,   //<=> 2
    MODE_OFF  //<=> 3
} MODE_T;

MODE_T mode_t; //mode_t mặc định là 0


//-----------FUNC MODE---------------------
void func_mode_1(){
    printf("LED 1 sáng\n");
}
void func_mode_2(){
    printf("LED 2 sáng\n");
}
void func_mode_3(){
    printf("Cả 2 LED chớp tắt\n");
}
void func_mode_off(){
    printf("Tắt cả 2 LED\n");
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