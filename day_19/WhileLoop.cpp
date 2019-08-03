#include <stdio.h>

int main(){
    /*
        In ra các số lẻ <= 10.
        Ấn Ctrl + C để hủy chương trình chạy
     */

    int number = 1;
    while (number <= 10){
        if(number % 2 == 1){
            printf("%d\t", number);
        }
        number++;
    }
}