/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ
//  Input: Nhập từ bàn phím 3 số bất kỳ
//  Output: Xuất ra màn hình số lớn nhất trong 3 số
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà
//  giá trị lớn nhất giữa 3 số

#include <stdio.h>

// //Tạo hàm
// int tenHam(so1, so2, so3){
// int max;
// //Cách giải để tìm ra số lớn nhất
// return max;
// }

int max(int a, int b, int c)
{
    int max = 0;
    if (a < b)
    {
        if (c > b)
        {
            max = c;
        }
        else
        {
            max = b;
        }
    }
    else // a>b
    {
        if (b > c)
        {
            max = a;
        }
        else if (b < c)
        {
            if (a < c)
            {
                max = c;
            }
            else
            {
                max = a;
            }
        }
    }
    return max;
}

int main()
{

    // //Gọi hàm trong hàm main
    // //ví dụ
    // int soMax = temHam(3,5,10)

    int maxNum = max(10, 3, 20);
    printf("So lon nhat: %d", maxNum);
    return 0;
}