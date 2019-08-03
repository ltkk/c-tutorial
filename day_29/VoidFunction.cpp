/*
    void : không là kiểu gì cả
 */

#include <stdio.h>

// Hàm in ra chu "Lap trinh khong kho" time lần
void Print(int time){
    for(int i = 0; i < time; i++){
        printf("\nLap trinh khong kho!");
    }
}

/*
    In ra các ước của 1 số nguyên
 */

void Divisor(int number){
    if(number < 0) number *= -1;
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            printf("%d ", i);
        }
    }
}

int main(){
    // Print(100);
    printf("\nTruoc khi goi ham");
    Divisor(100);
    printf("\nSau khi goi ham");
}