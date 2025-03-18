#include <stdio.h>
#include <math.h>

int laSoNguyenTo(int n) {
    if (n < 2) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
void inSoNguyenTo(int arr[], int n) {
    printf("Cac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
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

    inSoNguyenTo(arr, n);

    return 0;
}
