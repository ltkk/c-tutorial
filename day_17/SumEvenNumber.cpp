/*
    Tính tổng các số chẵn trong [a, b] với a <= b
 */

#include <stdio.h>

int main()
{
    int a, b;
    int sum = 0;

    printf("Nhap a = ");
    scanf("%d", &a);

    printf("Nhap b = ");
    scanf("%d", &b);

    // Nếu a > b => thoát chương trình
    if (a > b)
    {
        printf("Khong hop le!");
        return 0;
    }

    // Cách thứ nhất
    // for(int i = a; i <= b; i++){
    //     if(i % 2 == 0){
    //         sum += i;
    //     }
    // }

    // Cách 2: tốt hơn
    if (a % 2 != 0)
        a++;

    for(int i = a; i <= b; i+=2){
        sum += i;
    }
    
    printf("Sum = %d", sum);
}