#include <stdio.h>
#include <math.h>

double f(double x) {
    return pow(x, 2); 
}

int main() {
    int a, b, n = 1000; 
    double h, tong, x, tich_phan;

    printf("Nhap a: ");
    scanf_s("%d", &a);
    printf("Nhap b: ");
    scanf_s("%d", &b);

    h = (double)(b - a) / n;
    tong = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        x = a + i * h;
        tong += 2 * f(x);
    }

    tich_phan = h * tong / 2;
    printf("Tich phan cua f(x) = x^2 tren khoang [%d, %d] la: %.6lf\n", a, b, tich_phan);

    return 0;
}
