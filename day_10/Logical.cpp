#include <stdio.h>

int main(){
    // int a = 5;
    // printf("\n%d", (a > 0 && a % 2 == 0));
    // //              1   &&  0 = 0
    // printf("\n%d", (a % 2 == 0 || a % 5 == 0));
    // //                  0     ||  1 = 1

    // printf("\n%d", !(a == 5));


    // Tại sao không dùng & hay |?

    int b = 5;
    // dấu ||
    // printf("\n%d", (b == 5 || b++ > 0));
    // printf("\nb = %d", b);
    // b = 5;
    // printf("\n%d", (b == 5 | b++ > 0));
    // printf("\nb = %d", b);

    // dấu ||
    b = 5;
    printf("\n%d", (b != 5 && b++ > 0));
    printf("\nb = %d", b);
    b = 5;
    printf("\n%d", (b != 5 & b++ > 0));
    printf("\nb = %d", b);
}