/*
    Kiểm tra một số nguyên mà nó được tạo thành từ các số chẵn hay không?

    Ví dụ: 8, 222, 246, ...
 */

/*
    Ý tưởng:
        Các bạn lấy từng chữ số của số đó ra kiểm tra.

        n = 222
        last = n % 10. => 2
        n = n / 10
 */

#include <stdio.h>

int main(){
    int number;
    printf("\nNhap number = ");
    scanf("%d", &number);

    bool allEven = true; // Giả sử ban đầu là đúng
    int last;
    while(number > 0){
        last = number % 10; // lấy c/số cuối của number

        if(last % 2 == 1){
            allEven = false;
            break; // thoát vòng lặp
        }
        number /= 10; // bỏ chữ số cuối của number
    }
    
    if(allEven){
        printf("\nToan chu so chan!");
    }else{
        printf("\nCo chu so le!");
    }

}