#include <stdio.h>

int main(){
    int count = 0;
    go_here:
    printf("Lap trinh khong kho!\n");

    if(count < 5){
        count++;
        goto go_here;
    }

}