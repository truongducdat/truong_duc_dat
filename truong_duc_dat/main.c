#include <stdio.h>

typedef struct {
    char ten[50];
    int tuoi;
    float diem_toan;
    float diem_van;
    float diem_tb;
    int xep_loai;
}Hoc_sinh;
int main() {
    Hoc_sinh hs = { "Nguyen Van A", 16, 8.5, 7.0, 7.75, 1 };

    printf("Tên: %s\n", hs.ten);
    printf("Tuổi: %d\n", hs.tuoi);
    printf("Điểm Toán: %.2f\n", hs.diem_toan);
    printf("Điểm Văn: %.2f\n", hs.diem_van);
    printf("Điểm Trung Bình: %.2f\n", hs.diem_tb);
    printf("Xếp Loại: %d\n", hs.xep_loai);

    return 0;


}