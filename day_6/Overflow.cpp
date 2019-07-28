/*
    char : -128 -> 127
    sizeof char: 1 byte = 8 bits

    1 bit: 0 1
    2 bit: 00, 01, 10, 11 => 0, 1, 2, 3
    8 bits: 2^8 giá trị = 256 giá trị
 */

#include <stdio.h>
#include <limits.h>
int main()
{
    char c = CHAR_MAX + 3;
    printf("c = %d", c);
}