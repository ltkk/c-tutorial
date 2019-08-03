/*
    truyền tham trị(giá trị): pass by value
    truyền tham chiếu: pass by refference
 */

/*
    Viết hàm hoán vị 2 số
 */

#include <stdio.h>

void Swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void increment(int &n){
    n++;
}

int main(){
    int first, second;

    printf("\nNhap first = "); scanf("%d", &first);
    printf("\nNhap second = "); scanf("%d", &second);

    printf("\nfirst = %d, second = %d", first, second);
    increment(first);
    increment(second);
    Swap(first, second);
    printf("\nfirst = %d, second = %d", first, second);


}