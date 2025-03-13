#include <stdio.h>
#include<math.h>
int main() {
    int n, i;
    long long giai_thua = 1;

    printf("Nhap so tu nhien n: ");
    scanf_s("%d", &n);

    if (n < 0) {
        printf("Khong the tinh giai thua cua so am.\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            giai_thua *= i;
        }
        printf("Giai thua cua %d la: %lld\n", n, giai_thua);
    }

    return 0;
}
