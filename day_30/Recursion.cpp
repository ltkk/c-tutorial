/*
    Tính tổng các số từ 1 đến n sử dụng hàm đệ quy
 */

#include <stdio.h>

int SumNoRecursion(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

// Hàm đệ quy
int SumRecursion(int n){
    /*
        sum = 1 + ... + n
     */
    if(n == 0){
        return 0;
    return n + SumRecursion(n-1);
}


/*
    Giải thích hàm đệ quy
    Giả sử n = 4
    4 + SumRecursion(3)
    4 + 3 + SumRecursion(2)
    4 + 3 + 2 + SumRecursion(1)
    4 + 3 + 2 + 1 + SumRecursion(0)
    4 + 3 + 2 + 1 + 0
*/

int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);

    int sum1 = SumNoRecursion(n);
    int sum2 = SumRecursion(n);

    printf("\nSum1 = %d", sum1);
    printf("\nSum2 = %d", sum2);
}
