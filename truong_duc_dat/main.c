#include <stdio.h>

int main() {
    float diemtb;
    printf("vui long nhap diem tb: ");
    scanf_s("%f", &diemtb);
    if (diemtb >= 8.0) {
        printf("hoc sinh gioi\n");
    }
    else if (diemtb < 8.0 && diemtb >= 6.5) {
        printf("hoc sinh kha\n");
    }
    else {
        printf("hoc sinh kem");
    }
    return 0;
}
