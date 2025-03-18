#include <stdio.h>

void inGiaTriLe(int arr[], int n) {
    printf("Cac gia tri le trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) { 
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

   
    inGiaTriLe(arr, n);

    return 0;
}
