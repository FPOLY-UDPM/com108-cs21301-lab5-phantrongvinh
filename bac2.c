/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

#include <stdio.h>
#include <math.h>

void phuongTrinhBac2(float a, float b, float c, char *x) //, float *delta)
{
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                sprintf(x, "phuong trinh vo so nghiem\n");
            }
            else
            {
                sprintf(x, "phuong trinh vo nghiem\n");
            }
        }
        else
        {
            float rs = -c / b;
            sprintf(x, "phuong trinh co nghiem: %.2f\n", rs);
        }
    }
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta == 0)
        {
            float rs = -c / b;
            sprintf(x, "phuong trin co nhiem kep: %.2f\n", rs);
        }
        else if (delta < 0)
        {
            sprintf(x, "phuong trinh vo nghiem\n");
        }
        else
        {
            float rs1 = (-b + sqrt(delta)) / (2 * a);
            float rs2 = (-b - sqrt(delta)) / (2 * a);
            sprintf(x, "phuong trinh co 2 nghiem: %.2f va %.2f\n", rs1, rs2);
        }
    }
}

void main()
{
    float a = 2, b = 4, c = 1, delta = 0;
    // float rs;
    char x[100];
    phuongTrinhBac2(a, b, c, x);
    printf("%s", x);

    // switch (x)
    // {
    // case -1:
    //     printf("phuong trinh vo nghiem\n");
    //     break;

    // case 0:
    //     printf("phuong trinh vo so nghiem\n");
    //     break;

    // case 1:
    //     rs = -c / b;
    //     printf("phuong trinh co nghiem: %.2f\n", rs);
    //     break;
    // case 11:
    //     rs = -b / (2 * a);
    //     printf("phuong trin co nhiem kep: %.2f\n", rs);
    //     break;
    // case 2:
    //     float rs1 = (-b + sqrt(delta)) / (2 * a);
    //     float rs2 = (-b - sqrt(delta)) / (2 * a);
    //     printf("phuong trinh co 2 nghiem: %.2f va %.2f\n", rs1, rs2);
    //     break;

    // default:
    //     break;
    // }
}