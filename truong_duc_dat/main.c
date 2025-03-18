#include <stdio.h>

float tinhTrungBinhCongSoLe(int arr[], int n) {
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            tong += arr[i];
            dem++;
        }
    }

    if (dem == 0) {
        return 0; 
    }
    else {
        return (float)tong / dem; 
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu (toi da 100): ");
    scanf_s("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    float tbc = tinhTrungBinhCongSoLe(arr, n);
    if (tbc == 0) {
        printf("Khong co so le trong mang\n");
    }
    else {
        printf("Trung binh cong cac so le: %.2f\n", tbc);
    }

    return 0;
}
