#include <stdio.h>

int main(){
    int a;
    printf("\nNhap a = "); scanf("%d", &a);
    // Toán tử ++
    // ++a;
    // printf("\na++ = %d", a);


    // // Toán tử --
    // --a;
    // printf("\na-- = %d", a);

    // a = 5;
    // printf("\na = %d", a);

    // Tiền tố và hậu tố a++ và ++a
    printf("\n++a = %d", ++a);
    a = 5;
    printf("\n--a = %d", --a);
    a = 5;
    printf("\na++ = %d", a++);
    a = 5;
    printf("\na-- = %d", a--);
}