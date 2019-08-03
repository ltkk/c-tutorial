/*
    In ra các số nguyên tố nhỏ hơn 1000.
    Bài tập nhỏ:
        1. Kiểm tra số nhập từ bàn phím có phải SNT không?
        2. Kiểm tra và in ra các SNT nhỏ hơn 1000
 */

/*
    Nhắc lại kiến thức về SNT: 
    - Là số có 2 ước phân biệt duy nhất là 1 và chính nó
    - SNT nhỏ nhất là số 2

    + Giả sử số 9 có các ước: 1 3 9 
    + Giả sử số 8 có các ước: 1 2 4 8
 */

#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("\nNhap a = ");
    scanf("%d", &a);

    int i = 2;
    int count = 0; // đếm số ước của a
    for (; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }

    if(count == 0){
        printf("\n%d la SNT!", a);
    }else{
        printf("\n%d khong la SNT!", a);
    }
}