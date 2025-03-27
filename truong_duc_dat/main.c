#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[50];
    int tuoi;
    float diemToan;
    float diemVan;
    float diemTrungBinh;
    int xepLoai;
} HocSinh;

void tinh_diem_TB_xep_loai(HocSinh* mang_hs, int so_luong) {
    for (int i = 0; i < so_luong; i++) {
        mang_hs[i].diemTrungBinh = (mang_hs[i].diemToan + mang_hs[i].diemVan) / 2;
        if (mang_hs[i].diemTrungBinh >= 8.0) {
            mang_hs[i].xepLoai = 0;
        }
        else if (mang_hs[i].diemTrungBinh >= 6.5) {
            mang_hs[i].xepLoai = 1;
        }
        else if (mang_hs[i].diemTrungBinh >= 5.0) {
            mang_hs[i].xepLoai = 2;
        }
        else {
            mang_hs[i].xepLoai = 3;
        }
    }
}

void nhap_danh_sach(HocSinh* mang_hs, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin hoc sinh thu %d:\n", i + 1);
        printf("Ten: ");
        fgets(mang_hs[i].ten, sizeof(mang_hs[i].ten), stdin);
        mang_hs[i].ten[strcspn(mang_hs[i].ten, "\n")] = '\0';
        printf("Tuoi: ");
        scanf_s("%d", &mang_hs[i].tuoi);
        printf("Diem Toan: ");
        scanf_s("%f", &mang_hs[i].diemToan);
        printf("Diem Van: ");
        scanf_s("%f", &mang_hs[i].diemVan);
        while ((getchar()) != '\n' && getchar() != EOF);
    }
}

void in_danh_sach(HocSinh* mang_hs, int n) {
    printf("\n%-20s %-5s %-10s %-10s %-10s %-10s\n", "Ten", "Tuoi", "Toan", "Van", "DiemTB", "XepLoai");
    for (int i = 0; i < n; i++) {
        char* xepLoaiStr;
        switch (mang_hs[i].xepLoai) {
        case 0: xepLoaiStr = "Gioi"; break;
        case 1: xepLoaiStr = "Kha"; break;
        case 2: xepLoaiStr = "TB"; break;
        case 3: xepLoaiStr = "Yeu"; break;
        default: xepLoaiStr = "Khong xac dinh"; break;
        }
        printf("%-20s %-5d %-10.2f %-10.2f %-10.2f %-10s\n",
            mang_hs[i].ten, mang_hs[i].tuoi, mang_hs[i].diemToan,
            mang_hs[i].diemVan, mang_hs[i].diemTrungBinh, xepLoaiStr);
    }
}

HocSinh tim_dtb_hs_cao_nhat(HocSinh* mang_hs, int soluong) {
    HocSinh max = mang_hs[0];
    for (int i = 1; i < soluong; i++) {
        if (mang_hs[i].diemTrungBinh > max.diemTrungBinh) {
            max = mang_hs[i];
        }
    }
    return max;
}

void sap_xep_theo_diemTB(HocSinh* mang_hs, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mang_hs[i].diemTrungBinh < mang_hs[j].diemTrungBinh) {
                HocSinh temp = mang_hs[i];
                mang_hs[i] = mang_hs[j];
                mang_hs[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong hoc sinh: ");
    scanf_s("%d", &n);
    while ((getchar()) != '\n' && getchar() != EOF);

    HocSinh mang_hs[100];
    nhap_danh_sach(mang_hs, n);
    tinh_diem_TB_xep_loai(mang_hs, n);

    printf("\nDanh sach hoc sinh:\n");
    in_danh_sach(mang_hs, n);

    HocSinh hs_max = tim_dtb_hs_cao_nhat(mang_hs, n);
    printf("\nHoc sinh co diem trung binh cao nhat:\n");
    printf("%s - Tuoi: %d - Diem TB: %.2f\n", hs_max.ten, hs_max.tuoi, hs_max.diemTrungBinh);

    sap_xep_theo_diemTB(mang_hs, n);
    printf("\nDanh sach hoc sinh sau khi sap xep theo diem trung binh giam dan:\n");
    in_danh_sach(mang_hs, n);

    return 0;
}