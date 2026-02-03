/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN
//  Input: Nhập vào năm
//  Output: Có phải là năm nhuận hay không?
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không
//  chia hết cho 100

#include <stdio.h>

// Tạo hàm
void tinhNamNhuan(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d la nam nhuan\n", year);
    }
    else
    {
        printf("%d khong la nam nhuan\n", year);
    }
}

int main()
{
    int year = 2022;

    // //Gọi hàm trong hàm main
    tinhNamNhuan(year);

    return 0;
}
