/*
    1. Chỉ có if
    2. Có if else
    3. Có if else if 
    4. if else lồng nhau
 */

// 3. if else if
// BT: Nhập vào hai số nguyên, đưa ra kết luận so sánh 2 số đó

#include <stdio.h>

int main(){
    int a, b;
    printf("Nhap a = "); scanf("%d", &a);
    printf("Nhap b = "); scanf("%d", &b);


    // a, b 
    if(a > b){
        //
        printf("%d lon hon %d", a, b);
    }else if(a == b){
        printf("%d bang %d", a, b);
    }else{
        printf("%d nho hon %d", a, b);
    }
}