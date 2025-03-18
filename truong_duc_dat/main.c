#include <stdio.h>

int tinhTongMang(int arr[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    return tong;
}

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang (toi da 100): ");
    scanf_s("%d", &n);

    if (n > 100 || n <= 0) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    int arr[100]; 
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf_s("%d", &arr[i]);
    }

    int tong = tinhTongMang(arr, n);
    printf("Tong cac gia tri trong mang la: %d\n", tong);

    return 0;
}
