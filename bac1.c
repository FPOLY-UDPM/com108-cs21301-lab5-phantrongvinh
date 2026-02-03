/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

#include <stdio.h>
#include <math.h>

void phuongTrinhBac1(float a, float b, char *x)
{
    if (a == 0)
    {
        if (b == 0)
        {
            *x = "VSN";
        }
        else
        {
            *x = "VN";
        }
    }
    else
    {
        *x = "CN";
    }
}

void main()
{
    float a = 10, b = 20;
    char x;
    phuongTrinhBac1(a, b, &x);
    if (x == "VSN")
    {
        printf("Phuong trinh vo so nghiem\n");
    }
    else if (x == "VN")
    {
        printf("Phuong trinh vo nghiem\n");
    }
    else
    {
        float rs = -b / a;
        printf("Phuong trinh co nghiem: %.2f\n", rs);
    }
}