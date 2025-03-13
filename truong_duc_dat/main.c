#include <stdio.h>

int main() {
    int so, dem = 0;

    while (1) {
        printf("Nhap so: ");
        scanf_s("%d", &so);

        if (so == 0) {
            printf("Dung chuong trinh.\n");
            break;
        }

        if (so > 5) {
            printf("Nhap sai qua 5. Thoat chuong trinh.\n");
            break;
        }

        dem++;
    }

    return 0;
}
