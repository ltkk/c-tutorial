#include <stdio.h>

/*
    Cách khai báo hàm

    <kiểu dữ liệu> <tên hàm> (<các tham số>){
        // thân hàm
        return <value>; // value phải cùng kiểu <kiểu dữ liệu>
    }
 */
// Calculate sum of two number
// a: first number
// b: second number
int add(int a, int b){
    int sum = a + b;
    return sum;
}

// Lay so thu nhat tru so thu 2
float subtract(float a, float b){
    return a - b;
}



int main(){
    printf("Sum of 3 and 4 is %d", add(3, 4));

    int first = 7.5, second = 11;
    int sum = add(first, second);
    printf("\nSum of %d and %d is %d", first, second, sum);

    float f1 = 4.5, f2 = 5.4;

    printf("\nSubtract of %f and %f is %f", f1, f2, subtract(f1, f2));
}