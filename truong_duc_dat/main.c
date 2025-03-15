#include <stdio.h>
#include <ctype.h>

void in_hoa_chu_cai_dau(char str[]) {
    int i = 0;

   
    while (str[i] != '\0') {
     
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32; 
            }
        }
        i++;
    }
}

int main() {
    char str[] = "hello world";
    printf("Chuoi ban dau: '%s'\n", str);

    in_hoa_chu_cai_dau(str);

    printf("Chuoi sau khi chuyen: '%s'\n", str);
    return 0;
}
