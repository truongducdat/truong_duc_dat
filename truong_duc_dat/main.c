#include <stdio.h>

int main() {
    float diemtb;
    printf("vui long nhap diem tb: ");
    scanf_s("%f", &diemtb);
    if (diemtb >= 8.0) {
        printf("hoc sinh gioi\n");
    }
    else if ( diemtb >= 6.5) {
        printf("hoc sinh kha\n");
    }
    else if (diemtb >= 5.0) {
        printf("hoc sinh trung binh\n");
    }
    else {
        printf("hoc sinh kem");
    }
    return 0;
}
