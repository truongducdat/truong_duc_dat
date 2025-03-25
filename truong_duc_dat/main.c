#include <stdio.h>

typedef struct {
    char ten[50];
    int tuoi;
    float diemToan;
    float diemVan;
    float diemTrungBinh;
    int xepLoai; 
} HocSinh;

void tinh_diem_TB_xep_loai(HocSinh*mang_hs, int so_luong)
{
    for (int i = 0; i < so_luong; i++) {
        mang_hs[i].diemTrungBinh = (mang_hs[i].diemToan + mang_hs[i].diemVan) / 2;
        if (mang_hs[i].diemTrungBinh >= 8.0) {
            mang_hs[i].xepLoai = 0;
        }
        else if (mang_hs[i].diemTrungBinh >= 6.5)
        {
            mang_hs[i].xepLoai = 1;
        }
        else if (mang_hs[i].diemTrungBinh >= 5.0)
        {
            mang_hs[i].xepLoai = 2;
        }
        else{
            mang_hs[i].xepLoai = 3;
        }
    }
    

}
HocSinh tim_dtb_hs_cao_nhat(HocSinh* mang_hs, int soluong) {
    HocSinh max = { 0 };
    for(int i = 1; )
}




void main() {
   
}