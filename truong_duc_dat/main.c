#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("nhap so nguyen a,b,c lan luot: ");
    scanf_s("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("Số lớn nhất trong ba số là: %d\n", max);

    return 0;
}
