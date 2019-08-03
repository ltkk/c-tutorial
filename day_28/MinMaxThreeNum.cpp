/*
    Bài tập: Tìm min, max trong 3 số nguyên a b c nhập từ bàn phím
    SỬ dụng hàm
 */


#include <stdio.h>

// Hàm tìm min của 2 số
int MinTwoNum(int a, int b){
    return (a < b ? a : b);
    /*
        if (a < b) return a;
        else return b;
     */
}

// Hàm tìm max của 2 số
int MaxTwoNum(int a, int b){
    return (a > b ? a : b);
}

// Hàm tìm min 3 số nguyên
int MinThreeNum(int a, int b, int c){
    return MinTwoNum(a, MinTwoNum(b, c));
}


// Hàm tìm max 3 số
int MaxThreeNum(int a, int b, int c){
    int m = MaxTwoNum(a, b);
    int ans = MaxTwoNum(m, c);
    return ans;
}



/*
    a = 5, b = 7, c = 1
    min = min(min(a, b), c) // Ctrl C => Ctrl V
    max = max(min(a, b), c)
 */

int main(){
    int firstNum, secondNum, thirdNum;

    printf("\nNhap so thu nhat: "); scanf("%d", &firstNum);
    printf("\nNhap so thu hai: "); scanf("%d", &secondNum);
    printf("\nNhap so thu ba: "); scanf("%d", &thirdNum);

    // 
    printf("\nMin = %d", MinThreeNum(firstNum, secondNum, thirdNum));
    printf("\nMax = %d", MaxThreeNum(firstNum, secondNum, thirdNum));
    return 0;
}
