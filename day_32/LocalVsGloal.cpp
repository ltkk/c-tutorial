/*
    1. Biến toàn cục
    2. Biến cục bộ
    3. Biến static (biến tĩnh)
 */

// Biến toàn cục và biến cục bộ

#include <stdio.h>

int g_Number = 5; // biến toàn cục

void Sum(int a, int b){
    int sum = a + b; // biến cục bộ
    printf("\nSum = %d", sum);
}

int main(){
    int f = 5; // biến cục bộ
    int s = 10; // biến cục bộ
    Sum(f, s);
}