#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhap he so a, b, c: ");
    scanf_s("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("phuong trinh vo so nghiem\n");
            }
            else
            {
                printf("phuong trinh vo nghiem\n");
            }
        }
        else
        {
            printf("phuong trinh bac nhat, nghiem x= %.3f\n", -c / b);
        }
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / 2 * a;
            x2 = (-b - sqrt(delta)) / 2 * a;
            printf("phuong trinh co 2 nghiem phan biet\n");
            printf("nghiem x1 la: %.2f\n",x1);
            printf("nghiem x2 la: %.2f\n",x2);
        }
        else if (delta == 0)
        {
            x1 = -b / 2 * a;
            printf("phuong trinh co nghiem kep x1, x2 = %.2f\n", x1);
        }
        else {
            printf("phuong trinh vo nghiem");
        }
    }
    return 0;
}
