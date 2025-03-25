#include <stdio.h>

struct phan_so {
    int tu;  
    int mau; 
};

struct phan_so nhan_phan_so(struct phan_so x, struct phan_so y) {
    struct phan_so ketqua;
    ketqua.tu = x.tu * y.tu;
    ketqua.mau = x.mau * y.mau;
    return ketqua; 
}

int main() {
    struct phan_so a = { 2, 3 };  
    struct phan_so b = { 4, 5 };  

    struct phan_so ketqua = nhan_phan_so(a, b);

    printf("Kết quả: %d/%d\n", ketqua.tu, ketqua.mau); 

    return 0;
