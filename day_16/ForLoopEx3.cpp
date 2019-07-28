/*
    Tính tổng các số trong [a, b] với  0 < a <= b
 */

#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;

    int sum = 0; // cần khởi tạo giá trị
    
    for(int i = a; i <= b; i++){
        sum += i; // sum = sum + i
    }
    printf("Sum = %d", sum);
}