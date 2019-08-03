/*
    Nhập vào một số nguyên dương từ bàn phím và in ra số đó.
    Nếu nhập sai, bắt nhập lại.
 */

#include <stdio.h>

int main(){
    int number;
    do{
        printf("\nNhap number = ");
        scanf("%d", &number);
    }while(number < 1);
    
    // printf("\nNhap number = ");
    // scanf("%d", &number);

    // while(number < 1){
    //     printf("\nNhap number = ");
    //     scanf("%d", &number);
    // }

    printf("\nnumber = %d", number);
}