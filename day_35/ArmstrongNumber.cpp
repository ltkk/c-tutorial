/*
    BT kiểm tra số Armstrong
 */

#include <stdio.h>
#include <math.h>
/*
    1. Đếm số lượng chữ số
    2. Tính tổng các lũy thừa: cơ số là các chữ số, số mũ là số lượng chữ số
    3. So sánh và kết luận
 */

// Đếm số lượng chữ số của số n
/*
    1023
    1. 102
    2. 10
    3. 1
    4. 0
    => Có 4 chữ số
 */
int CountDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        ++count;
    }
    return count;
}

// Kiểm tra số armstrong
/*
    n = 1023
    => 1^4 + 0^4 + 2^4 + 3^4 so sánh với 1023

    1023 % 10 = 3
    1023 / 10 = 102
 */
bool IsArmstrong(int n)
{
    int numDigit = CountDigit(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10; // lấy chữ số cuối cùng
        tmp /= 10;       // bỏ chữ số cuối cùng
        sum += pow(last, numDigit);
    }
    if (sum == n)
        return true;
    return false;
}

int main()
{
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);

    if (IsArmstrong(n) == true)
    {
        printf("\n%d la so armstrong!", n);
    }else{
        printf("\n%d khong la so armstrong!", n);
    }
}