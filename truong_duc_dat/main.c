#include <stdio.h>

int main() {
    int n, i, tong = 0;
    printf("nhap so tu nhien n: ");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) { 
            tong += i;
        }
    }
    printf("Tong cac so chan cua %d so tu nhien dau tien la: %d\n", n, tong);

    return 0;
}
