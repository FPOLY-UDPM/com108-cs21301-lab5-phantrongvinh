/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ
//  Input: Nhập vào từ bàn phím 2 giá trị a,b
//  Output: hoán vị 2 giá trị của a và b
//  Hướng dẫn thực hiện:
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu

#include <stdio.h>

// Tạo hàm

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    // //Gọi hàm trong hàm main
    int a = 15, b = 10;
    swap(&a, &b);
    printf("a = %d; b = %d\n", a, b);

    return 0;
}
