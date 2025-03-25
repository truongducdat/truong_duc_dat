#include <stdio.h>

typedef struct {
    int tu;
    int mau;
} PhanSo;

PhanSo nhan_phan_so(PhanSo x, PhanSo y) {
    PhanSo ketqua;
    ketqua.tu = x.tu * y.tu;
    ketqua.mau = x.mau * y.mau;
    return ketqua;
}
PhanSo Tim_phan_so_lon_nhat(PhanSo mang[], int soluong) {
    PhanSo max = mang[0];//neu phan tu dau tien lon nhat
    for (int i = 1; i < soluong; i++) {
        if (max.tu * mang[i].mau < mang[i].tu * max.mau) {
            max = mang[i];
        }
       
    }
    return max;
}
int main() {
    PhanSo mang[] = { {2, 3}, {4, 5}, {5, 6}, {7, 8} };
    int soluong = sizeof(mang) / sizeof(mang[0]);

    PhanSo max = Tim_phan_so_lon_nhat(mang, soluong);

    printf("Phân số lớn nhất: %d/%d\n", max.tu, max.mau);

    return 0;

}