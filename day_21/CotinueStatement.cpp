#include <stdio.h>

/*
    In ra các chữ số chẵn từ 1 đến 100.
 */

int main(){
    for(int i = 0; i <= 100; i++){
        if(i % 2 != 0){
            continue;
        }
        printf("%d ", i);
    }
}