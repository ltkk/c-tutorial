/*
    1. Chỉ có if
    2. Có if else
    3. Có if else if 
    4. if else lồng nhau
 */

// 4. if else lồng nhau
// BT: Nhập vào 1 số nguyên, kiểm tra số đó là số âm chẵn, âm lẻ, dương chẵn hay dương lẻ hay là số 0?

#include <stdio.h>

int main(){
    int a;
    printf("Nhap a = "); scanf("%d", &a);

    if(a > 0){
        // Số dương
        if(a % 2 == 0){
            printf("Day la so duong chan!");
        }else{
            printf("Day la so duong le!");
        }
    }else if(a == 0){
        // Số 0
        printf("Day la so 0!");
    }else{ 
        // Số âm
        if(a % 2 == 0){
            printf("Day la so am chan!");
        }else{
            printf("Day la so am le!");
        }
    }
}