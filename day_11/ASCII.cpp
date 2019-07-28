#include <stdio.h>

int main(){
    char c;
    printf("\nNhap ky tu c = "); scanf("%c", &c); // character

    printf("\nGia tri cua c la \'%c\'", c);
    printf("\nGia tri cua c la \'%d\'", c);

    printf("\nc la ky tu a? %d", (c == 97));

    int a = 97;
    printf("\nGia tri cua a la \'%c\'", (char)a);
}