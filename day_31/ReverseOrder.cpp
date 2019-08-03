/*
    Đảo ngược số sử dụng hàm
    Ví dụ: 
        1234 => 4321
        1300 => 31
 */

#include <stdio.h>

/*
    Giả sử với số n = 1234
    n = 1 * 1000 + 2 * 100 + 2 * 10 + 4 * 1
            10^3        10^2    10^1       10^0

    Đảo ngược thế nào?

    B1: num = 4
    B2: num = 4 * 10 + 3 = 43
    B3. num = 43 * 10 + 2 = 432
    B4. num = 432 * 10 + 1 = 4321
 */

int Reverse(int n){
    /*
        Lấy chữ số cuối cùng bằng cách chia dư cho 10
        Bỏ chữ số cuối cùng bằng cách chia cho 10
     */
    int reNum = n % 10; // B1: Lấy chữ số cuối cùng
    n /= 10; // Bỏ chữ số cuối cùng
    int last;
    while(n > 0){
        last = n % 10; // Lấy chữ số cuối cùng
        n /= 10; // Bỏ chữ số cuối cùng
        reNum = reNum * 10 + last; // Chính là các bước 2 3 4
    }
    return reNum;
}

int main(){
    int num;
    printf("Nhap num = ");
    scanf("%d", &num);
    printf("\nReNum = %d", Reverse(num));
}