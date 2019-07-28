/*
Nhập vào điểm 3 môn toán, văn, anh của 1 học sinh, viết chương trình đưa ra xếp loại của học sinh đó theo điểm trung bình như sau:

- [0, 4.0): Yếu
- [4.0, 6.5): Trung bình
- [6.5, 8.0): Khá
- [8.0, 10]: Giỏi

 */

#include <stdio.h>

#define GIOI "\nXep loai gioi"
#define KHA "\nXep loai kha"
#define TB "\nXep loai trung binh"
#define YEU "\nXep loai yeu"

/*
    Format code: Alt + Shift + F
 */

int main()
{
    // Nhập điểm 3 môn
    float diemToan;
    float diemVan;
    float diemAnh;
    float dtb;

    printf("\nNhap diem toan = ");
    scanf("%f", &diemToan);
    printf("\nNhap diem van = ");
    scanf("%f", &diemVan);
    printf("\nNhap diem anh = ");
    scanf("%f", &diemAnh);

    dtb = (diemToan + diemVan + diemAnh) / 3;
    printf("\nDTB = %.2f", dtb);
    if (dtb < 4)
    {
        printf(YEU);
    }else if (dtb < 6.5){
        printf(TB);
    }else if(dtb < 8.0){
        printf(KHA);
    }else{
        printf(GIOI);
    }
}