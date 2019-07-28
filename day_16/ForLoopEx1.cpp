/*
    In ra 3 dòng chữ "Hoc C ba dao tai Lap trinh khong kho!"
 */


#include <stdio.h>

int main(){
    for(int i = 0; i < 3; i++){
        printf("Hoc C ba dao tai Lap trinh khong kho!\n");
    }
    // Continue ...
    printf("Ket thuc vong lap!\n");
}

/*
    Giải thích:
    B1. Gán biến lặp i = 0
    B2. Kiểm tra điều kiện (i = 0) < 3 => Đúng
    B3. Do kiểm tra điều kiện đúng => Thực hiện thân vòng lặp for
    B4. Gọi tới (i++) => tăng i lên 1 đơn vị => i = 1
    B5. Kiểm tra điều kiện (i = 1) < 3 => Đúng
    B6. Do kiểm tra điều kiện đúng => Thực hiện thân vòng lặp for
    B7. Gọi tới (i++) => tăng i lên 1 đơn vị => i = 2
    B8. Kiểm tra điều kiện (i = 2) < 3 => Đúng
    B9. Do kiểm tra điều kiện đúng => Thực hiện thân vòng lặp for
    B10. Gọi tới (i++) => tăng i lên 1 đơn vị => i = 3
    B11. Kiểm tra điều kiện (i = 3) < 3 => Sai => Kết thúc vòng lặp
 */