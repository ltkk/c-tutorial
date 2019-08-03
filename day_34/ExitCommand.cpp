/*
    Lệnh return
    Lệnh exit()
 */

#include <stdio.h>
#include <stdlib.h>
int function(){
    int a = 5;
    return a;
    printf("\na = %d", a);
}

void foo(){
    printf("\nThis is a sentence!");
    exit(0);
    printf("\nThis is other sentence!");
}

int main(){
    // int value = function();
    foo();
    printf("\nExit program...");
}