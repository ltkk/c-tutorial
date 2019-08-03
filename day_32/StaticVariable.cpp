#include <stdio.h>


void display()
{
    static int c = 0;
    printf("%d  ",c);
    c += 5;
}

int main()
{
    display();
    display();
}