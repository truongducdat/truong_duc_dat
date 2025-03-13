#include <stdio.h>

int main() {
    int n;
    printf("Nhap so tu nhien: ");
    scanf_s("%d", &n);

    printf("Cac so nguyen to nho hon %d la:\n", n);
    for (int i = 2; i < n; i++) {
        int kt = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                kt = 0;
                break;
            }
        }
        if (kt) {
            printf("%d ", i);
        }
    }
    return 0;
}
