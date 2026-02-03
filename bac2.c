/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

#include <stdio.h>
#include <math.h>

void phuongTrinhBac2(float a, float b, float c, int *x, float *delta)
{
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                *x = 0;
            }
            else
            {
                *x = -1;
            }
        }
        else
        {
            *x = 1;
        }
    }
    else
    {
        *delta = b * b - 4 * a * c;
        if (*delta == 0)
        {

            *x = 11;
        }
        else if (*delta < 0)
        {
            *x = -1;
        }
        else
        {
            *x = 2;
        }
    }
}

void main()
{
    float a = 4, b = 2, c = 1, delta = 0;
    float rs;
    int x;
    phuongTrinhBac2(a, b, c, &x, &delta);
    switch (x)
    {
    case -1:
        printf("phuong trinh vo nghiem\n");
        break;

    case 0:
        printf("phuong trinh vo so nghiem\n");
        break;

    case 1:
        rs = -c / b;
        printf("phuong trinh co nghiem: %.2f\n", rs);
        break;
    case 11:
        rs = -b / (2 * a);
        printf("phuong trin co nhiem kep: %.2f\n", rs);
        break;
    case 2:
        float rs1 = (-b + sqrt(delta)) / (2 * a);
        float rs2 = (-b - sqrt(delta)) / (2 * a);
        printf("phuong trinh co 2 nghiem: %.2f va %.2f\n", rs1, rs2);
        break;

    default:
        break;
    }
}