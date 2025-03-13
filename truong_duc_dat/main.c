#include <stdio.h>

int main() {
    double tien_gui, lai, tien_nhan;
    int so_nam, i;

    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &tien_gui);
    printf("Nhap lai suat moi nam (%%): ");
    scanf("%lf", &lai);
    printf("Nhap so nam gui: ");
    scanf("%d", &so_nam);

    tien_nhan = tien_gui;
    for (i = 1; i <= so_nam; i++) {
        tien_nhan += tien_nhan * lai / 100;
    }

    printf("Sau %d nam, so tien nhan duoc la: %.2lf\n", so_nam, tien_nhan);

    return 0;
}
