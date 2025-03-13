#include <stdio.h>

int main() {
    int so_tien, so_tien_con_lai;
    int nam_muoi = 0, mot_tram = 0, hai_tram = 0, nam_tram = 0;

    do {
        printf("Nhap so tien can rut (boi so cua 50000): ");
        scanf_s("%d", &so_tien);

        if (so_tien % 50000 != 0) {
            printf("So tien nhap phai la boi so cua 50000.\n");
        }
    } while (so_tien % 50000 != 0);

    so_tien_con_lai = so_tien;

    printf("Chi tiet cac lan rut tien:\n");

    while (so_tien_con_lai > 0) {
        if (so_tien_con_lai >= 50000) {
            nam_muoi++;
            so_tien_con_lai -= 50000;
            printf("1 x 50,000\n");
        }

        if (so_tien_con_lai >= 100000) {
            mot_tram++;
            so_tien_con_lai -= 100000;
            printf("1 x 100,000\n");
        }

        if (so_tien_con_lai >= 200000) {
            hai_tram++;
            so_tien_con_lai -= 200000;
            printf("1 x 200,000\n");
        }

        if (so_tien_con_lai >= 500000) {
            nam_tram++;
            so_tien_con_lai -= 500000;
            printf("1 x 500,000\n");
        }
    }

    printf("\nTong so luong tien rut:\n");
    if (nam_muoi > 0) printf("%d x 50,000\n", nam_muoi);
    if (mot_tram > 0) printf("%d x 100,000\n", mot_tram);
    if (hai_tram > 0) printf("%d x 200,000\n", hai_tram);
    if (nam_tram > 0) printf("%d x 500,000\n", nam_tram);

    return 0;
}
