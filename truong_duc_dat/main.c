#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    char gender[5];
    int score1;
    int score2;
    float average;
} HocSinh;

// Hàm tính điểm trung bình
float tinhDiemTB(HocSinh* hs) {
    return (hs->score1 + hs->score2) / 2.0;
}

// Hàm đọc file CSV và xử lý dữ liệu
void docFile(char* fileName, HocSinh* dsHocSinh, int* soLuong) {
    FILE* file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Không thể mở file %s\n", fileName);
        return;
    }

    char line[100];
    // Đọc từng dòng của file CSV
    while (fgets(line, sizeof(line), file)) {
        HocSinh hs;
        // Kiểm tra nếu dòng rỗng hoặc không hợp lệ
        if (strlen(line) < 10) continue;

        // Đọc từng trường trong dòng CSV
        sscanf(line, "%[^,],%d,%[^,],%d,%d", hs.name, &hs.age, hs.gender, &hs.score1, &hs.score2);
        // Tính điểm trung bình
        hs.average = tinhDiemTB(&hs);
        // Lưu học sinh vào danh sách
        dsHocSinh[*soLuong] = hs;
        (*soLuong)++;
    }

    fclose(file);
}

// Hàm sắp xếp danh sách học sinh theo điểm trung bình (giảm dần)
void sapXep(HocSinh* dsHocSinh, int soLuong) {
    for (int i = 0; i < soLuong - 1; i++) {
        for (int j = i + 1; j < soLuong; j++) {
            if (dsHocSinh[i].average < dsHocSinh[j].average) {
                // Hoán đổi học sinh i và j
                HocSinh temp = dsHocSinh[i];
                dsHocSinh[i] = dsHocSinh[j];
                dsHocSinh[j] = temp;
            }
        }
    }
}

// Hàm in danh sách học sinh ra màn hình
void inDanhSach(HocSinh* dsHocSinh, int soLuong) {
    for (int i = 0; i < soLuong; i++) {
        printf("%s (%d) - %s: %.2f\n", dsHocSinh[i].name, dsHocSinh[i].age, dsHocSinh[i].gender, dsHocSinh[i].average);
    }
}

// Hàm lưu danh sách học sinh vào file CSV
void luuDanhSach(char* fileName, HocSinh* dsHocSinh, int soLuong) {
    FILE* file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Không thể lưu file %s\n", fileName);
        return;
    }

    for (int i = 0; i < soLuong; i++) {
        fprintf(file, "%s,%d,%s,%d,%d,%.2f\n", dsHocSinh[i].name, dsHocSinh[i].age, dsHocSinh[i].gender, dsHocSinh[i].score1, dsHocSinh[i].score2, dsHocSinh[i].average);
    }

    fclose(file);
}

int main() {
    HocSinh dsHocSinh[100];
    int soLuong = 0;
    // Đọc dữ liệu từ file
    docFile("D:/IMIC ACADEMIC/c_c++/DanhSachHocSinh1.csv", dsHocSinh, &soLuong);

    printf("\nDanh sách học sinh:\n");
    inDanhSach(dsHocSinh, soLuong);

    // Tính điểm trung bình cao nhất
    HocSinh* maxHs = &dsHocSinh[0];
    for (int i = 1; i < soLuong; i++) {
        if (dsHocSinh[i].average > maxHs->average) {
            maxHs = &dsHocSinh[i];
        }
    }

    printf("\nHọc sinh có điểm trung bình cao nhất:\n");
    printf("%s (%d) - %s: %.2f\n", maxHs->name, maxHs->age, maxHs->gender, maxHs->average);

    // Sắp xếp danh sách học sinh theo điểm trung bình giảm dần
    sapXep(dsHocSinh, soLuong);

    // Lưu danh sách học sinh đã sắp xếp vào file mới
    luuDanhSach("D:/IMIC ACADEMIC/c_c++/DanhSachHocSinhSorted.csv", dsHocSinh, soLuong);

    return 0;
}
