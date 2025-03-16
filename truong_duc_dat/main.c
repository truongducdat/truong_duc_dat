#include <stdio.h>

void tim_vi_tri_c(const char str[]) {
    int found = 0; 
    printf("Cac vi tri cua ky tu 'c' trong chuoi: ");

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'c') { 
            printf("%d ", i); 
            found = 1; 
        }
    }

    if (!found) {
        printf("Khong tim thay ky tu 'c' trong chuoi.");
    }
    printf("\n");
}

int main() {
    char str[] = "chao mung cac ban den voi buoi hoc 5";
    printf("Chuoi ban dau: '%s'\n", str);

    tim_vi_tri_c(str);

    return 0;
}
