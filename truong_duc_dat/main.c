#include <stdio.h>

int main() {
    int i, j;

    for (j = 2; j <= 9; j++) { 
        printf("Bang cuu chuong %d:\n", j);
        for (i = 1; i <= 9; i++) {
            printf("%d x %d = %d\n", j, i, j * i);
        }
        printf("\n"); 
    }

    return 0;
}
