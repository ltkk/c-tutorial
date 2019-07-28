/*
    1. Chỉ có if
    2. Có if else
    3. Có if else if 
    4. if else lồng nhau
 */

// 2. Có if else
// BT: Nhập vào 1 số nguyên, kiểm tra số đó có phải số chẵn hay số lẻ

#include <stdio.h>

int main(){
    int a;
    printf("Nhap a = "); scanf("%d", &a);

    if (a % 2 == 0) // a chia hết cho 2
    {
        printf("%d la so chan", a);
    }else{
        printf("%d la so le", a);
    }
}