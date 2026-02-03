/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

#include <stdio.h>

void phuongTrinhBac2(float a, float b, float c, char *x, float *delta)
{
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                *x = "Phuong trinh vo so nghiem\n";
            }
            else
            {
                *x = "Phuong trinh vo nghiem\n";
            }
        }
        else
        {
            float rs = -c / a;
            *x = "Phuong trinh co nghiem: %.2f\n", rs;
        }
    }
    else
    {
        *delta = b * b - 4 * a * c;
        if (*delta == 0)
        {

            *x = "CNK";
        }
        else if (*delta < 0)
        {
            *x = "VN";
        }
        else
        {
            float rs1 = (-b + sqrt(delta)) / (2 * a);
            float rs2 = (-b - sqrt(delta)) / (2 * a);
            *x = "Phuong trinh co 2 nghiem: %.2f va %.2f\n", rs1, rs2;
        }
    }
}

void main()
{
    float a = 4, b = 2, c = 1, delta = 0;
    char x;
    phuongTrinhBac2(a, b, c, &x, &delta);
    switch (x)
    {
    case 'VN':
        printf("phuong trinh vo nghiem\n");
        break;

    case 'VSN':
        printf("phuong trinh vo so nghiem\n");
        break;

    case 'CNB1':
        int rs = -c / a;
        printf("phuong trinh co nghiem: %.2f\n", rs);
        break;
    case 'CNK':
        int rs = -b / (2 * a);
        printf("phuong trin co nhiem kep: %.2f\n", rs);
        break;
    case 'CNB2':
        int rs1 = (-b + sqrt(delta)) / (2 * a);
        int rs2 = (-b - sqrt(delta)) / (2 * a);
        printf("phuong trinh co 2 nghiem: %.2f va %.2f\n", rs1, rs2);
        break;

    default:
        break;
    }
}