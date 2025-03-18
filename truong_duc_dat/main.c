#include <stdio.h>

void inViTriSoLonNhat(int arr[], int n) {
    int max = arr[0];

  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

 
    printf("Cac vi tri cua so lon nhat (%d) trong mang la: ", max);
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            printf("%d ", i);
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

    inViTriSoLonNhat(arr, n);
    return 0;
}
