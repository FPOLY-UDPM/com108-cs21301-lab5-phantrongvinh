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
            sprintf(x, "vo so nghiem");
        }
        else
        {
            sprintf(x, "vo nghiem");
        }
    }
    else
    {
        float rs = -b / a;
        sprintf(x, "co nghiem la %.2f", rs);
    }
}

void main()
{
    float a = 10, b = 20;
    char x[100];
    phuongTrinhBac1(a, b, x);
    printf("Phuong trinh %.2fx + %.2f = 0 %s\n", a, b, x);
}