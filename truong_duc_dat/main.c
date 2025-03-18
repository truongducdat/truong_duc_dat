#include <stdio.h>
#include <math.h>

void inGiaTriLonNhat(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Gia tri lon nhat trong mang la: %d\n", max);
}
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang (toi da 100): ");
    scanf_s("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    int arr[100];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    inGiaTriLonNhat(arr, n);

    return 0;
}
