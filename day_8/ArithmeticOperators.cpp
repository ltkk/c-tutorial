#include <stdio.h>

int main(){
    int a, b;
    printf("\nNhap a = "); scanf("%d", &a); 
    // Lưu ý nhập b != 0
    printf("\nNhap b = "); scanf("%d", &b); 

    // Phép (+)
    int sum = a + b;
    printf("\n%d + %d = %d", a, b, sum);

    // Phép (-)
    int sub = a - b;
    printf("\n%d - %d = %d", a, b, sub);

    // Phép (*)
    int mul = a * b;
    printf("\n%d * %d = %d", a, b, mul);

    // Phép (/)
    float div = a / (float)b;
    // float div = a / b * 1.0;
    // float div = (float)a / b;
    // float div = (float)(a / b); // do not use
    printf("\n%d / %d = %f", a, b, div);

    // Phép (%)
    int mod = a % b;
    printf("\n%d %% %d = %d", a, b, mod);
}