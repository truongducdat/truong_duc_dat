#include <stdio.h>

int main() {
    int a, b;  

    
    printf("Nhap hai so nguyen a va b: ");
    scanf_s("%d %d", &a, &b);

  
    if (a > b) {
        printf("Số lớn nhất là: %d\n", a);
    }
    else {
        printf("Số lớn nhất là: %d\n", b);
    }

    return 0;
}
