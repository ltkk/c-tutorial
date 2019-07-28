#include <stdio.h>

int main(){
    int a, b;
    printf("\nNhap a = "); scanf("%d", &a);
    printf("\nNhap b = "); scanf("%d", &b);

    printf("a = %d, b = %d", a, b);


    // Hoán vị
    // Giả sử a = 3, b = 5
    int temp = a; // temp lưu giá trị a
    // temp = a = 3, b = 5
    a = b; // a lấy giá trị của b
    // 1
    b = temp; // b lấy giá trị của a qua temp
    // temp = 3, a = 5, b = 3

    // Cách hiểu sai
    // // a = 3, b = 5
    // a = b;
    // // a = 5, b = 5
    // b = a;
    // // b = 5, a = 5

    // In ra
    printf("\na = %d, b = %d", a, b);
}