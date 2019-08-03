/*
    In ra chữ số đầu tiên của một số nguyên number nhập từ bàn phím.

    Ví dụ: 12345 => 1
 */

/*
    Ý tưởng:
        n = 12345
        chừng nào n > 9: n = n / 10
 */

#include <stdio.h>

int main(){
    int number;
    printf("\nNhap number = ");
    scanf("%d", &number);
    int last = number;
    // Vòng lặp for
    for(;last > 9;){
        last /= 10; // last = last / 10
    }

    // Hoặc
    // int last = number;
    // for(;last > 9;last /= 10){
    // }
    printf("Chu so dau tien cua %d la %d", number, last);


    // Vòng lặp while

    // Vòng lặp do while
}