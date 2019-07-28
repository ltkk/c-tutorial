#include <stdio.h>

int main(){
    int a = 5, c;
    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 => c = c + a
    printf("c = %d\n", c);
    c -= a;     // c is 5 => c = c - a
    printf("c = %d\n", c);
    c *= a;     // c is 25 => c = c * a
    printf("c = %d\n", c);
    c /= a;     // c is 5 => c = c / a
    printf("c = %d\n", c);
    c %= a;     // c = 0 => c = c % a
    printf("c = %d\n", c);

    // return 0;
}