/*
    Tìm số lớn nhất trong 3 số a, b, c nhập từ bàn phím
 */

#include <stdio.h>

int main()
{
    float a, b, c;
    printf("\nNhap 3 so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    // Tìm max theo C1
    float maxValue = a;

    if(b > maxValue){
        maxValue = b;
    }

    if(c > maxValue){
        maxValue = c;
    }

    // Tìm max theo C2
    // Không khuyến khích
    // if (a >= b && a >= c)
    // {
    //     printf("Max = %f", a);
    // }
    // else if (b >= a && b >= c)
    // {
    //     printf("Max = %f", b);
    // }
    // else
    // {
    //     printf("Max = %f", c);
    // }
}