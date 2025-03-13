#include <stdio.h>

int main() {
    int arr[10];
    int total = 0;
    printf("nhap gia tri cho 10 doi tuong:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Nhap gia tri thu %d: ", i + 1);
        scanf_s("%d", &arr[i]);
        total += arr[i];

        
    }
    printf("tong gia tri 10 doi tuong: %d\n",total );
    return 0;
}
