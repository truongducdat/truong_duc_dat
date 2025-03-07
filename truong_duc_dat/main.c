#include <stdio.h>

#define PASSWORD 1234  
#define LAN_THU_TOI_DA 3    
#define SO_TIEN_TOI_DA 10000 

int main() {
    int mknd, lanthu = 0, sotien;

    while (lanthu < LAN_THU_TOI_DA) {
        printf("Vui long nhap mat khau: ");
        if (scanf_s("%d", &mknd) != 1) {  
            printf("Nhap sai dinh dang nhap lai\n");
            return 1;
        }

        switch (mknd == PASSWORD) {
        case 1: 
            while (1) {
                printf("Vui long nhap so tien ban muon rut: ");
                if (scanf_s("%d", &sotien) != 1) { 
                    printf("Ko dung dinh dang\n");
                    return 1;
                }
                if (sotien > SO_TIEN_TOI_DA) {
                    printf("So tien vuot qua gioi han. Vui long nhap lai\n");
                }
                else {
                    printf("Ban vua moi rut: %d VND\n", sotien);
                    return 0;
                }
            }
            break;

        case 0: 
            lanthu++;
            if (lanthu < LAN_THU_TOI_DA) {
                printf("Ban nhap sai mat khau lan thu %d\n", lanthu);
                printf("Ban con %d lan nhap mat khau\n", LAN_THU_TOI_DA - lanthu);
            }
            else {
                printf("Ban da nhap sai qua %d lan. Thoat chuong trinh!\n", LAN_THU_TOI_DA);
            }
            break;
        }
    }

    return 0;
}
