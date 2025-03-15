#include <stdio.h>
#include <ctype.h>

int dem_tu(const char chuoi[]) {
    int dem = 0;

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if ((i == 0 || chuoi[i - 1] == ' ') && chuoi[i] != ' ') {
            dem++;
        }
    }
    return dem;
}

int main() {
    char str1[] = "Hello World";
    int so_tu = dem_tu(str1);

    printf("So tu trong chuoi la: %d\n", so_tu);
    return 0;
}
