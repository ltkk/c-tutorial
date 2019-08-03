/*
    In ra chữ số đầu tiên của một số nguyên number nhập từ bàn phím.

    Ví dụ: 12345 => 1
 */

#include <stdio.h>

int main(){
    int number;
    printf("\nNhap number = ");
    scanf("%d", &number);
    // Vòng lặp for
    
    // Vòng lặp while

    int last = number;
    // Vòng lặp do while
    do{
        if(last < 10){
            printf("Chu so dau tien cua %d la %d", number, last);
            return 0; // Thoát chương trình
        }
        last /= 10;
    }while(true); // luôn luôn đúng
    
}