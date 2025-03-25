#include <stdio.h>

typedef struct {
    char ten[50];
    int tuoi;
    float diemToan;
    float diemVan;
    float diemTrungBinh;
    int xepLoai; 
} HocSinh;

float tinh_diem_trung_binh(float diemToan, float diemVan) {
    return (diemToan + diemVan) / 2; 
}

int tinh_xep_loai(float diemTrungBinh) {
    if (diemTrungBinh >= 8.0)
        return 0; 
    else if (diemTrungBinh >= 6.5)
        return 1; 
    else if (diemTrungBinh >= 5.0)
        return 2; 
    else
        return 3; 
}

void hien_thi_thong_tin(HocSinh hs) {
    printf("Tên: %s\n", hs.ten);
    printf("Tuổi: %d\n", hs.tuoi);
    printf("Điểm Toán: %.2f\n", hs.diemToan);
    printf("Điểm Văn: %.2f\n", hs.diemVan);
    printf("Điểm Trung Bình: %.2f\n", hs.diemTrungBinh);
    printf("Xếp Loại: %d\n", hs.xepLoai);
}

int main() {
    HocSinh hs = { "Nguyen Van A", 16, 8.5, 7.0, 0, 0 };

    hs.diemTrungBinh = tinh_diem_trung_binh(hs.diemToan, hs.diemVan);
    hs.xepLoai = tinh_xep_loai(hs.diemTrungBinh);

    hien_thi_thong_tin(hs);

    return 0;
}