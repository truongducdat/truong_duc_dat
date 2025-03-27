#include <stdio.h>
//xây dựng kiểu dữ liệu mới để mô tả đổi tượng là phân số
typedef struct {
    int tu;
    int mau;
} phanso;
//viết hàm nhân 2 phân số
phanso Nhan_phan_so(phanso ps_x,phanso ps_y) {
    phanso kq;
    kq.tu = ps_x.tu * ps_y.tu;
    kq.mau = ps_x.mau * ps_y.mau;
    return kq;
}
//viêt hàm chia 2 phân số
phanso chia_phan_so(phanso ps_x, phanso ps_y) {
    phanso kq;
    kq.tu = ps_x.tu * ps_y.mau;
    kq.mau = ps_x.mau * ps_y.mau;
    return kq;
}
//viết hàm cộng 2 phân số
phanso cong_phan_so(phanso ps_x, phanso ps_y) {
    phanso kq;

    if (ps_x.mau == ps_y.mau) {
        kq.tu = ps_x.tu + ps_y.tu;
        kq.mau = ps_x.mau;
    }
    else
    {
        kq.tu = ps_x.tu * ps_y.mau + ps_y.tu * ps_x.mau;
        kq.mau = ps_x.mau * ps_y.mau;
    }
    return kq;
}
//viết hàm trừ 2 phần số
phanso tru_phan_so(phanso ps_x, phanso ps_y) {
    phanso kq;
    if (ps_x.mau == ps_y.mau) {
        kq.tu = ps_x.tu - ps_y.tu;
        kq.mau = ps_x.mau;
    }
    else {
        kq.tu = ps_x.tu * ps_y.mau - ps_y.tu * ps_x.mau;
        kq.mau = ps_x.mau * ps_y.mau;
    }
    return kq;
}
//viết hàm rút gọn 2 phân số

int ucln(int a, int b) {// Hàm tìm ước chung lớn nhất
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

phanso rut_gon_phan_so(phanso ps) {// Hàm rút gọn phân số
    int uc = ucln(ps.tu, ps.mau);
    ps.tu /= uc;
    ps.mau /= uc;

    // Đưa dấu âm về tử số
    if (ps.mau < 0) {
        ps.tu *= -1;
        ps.mau *= -1;
    }

    return ps;
}
void in_phan_so(phanso ps) {
    printf("%d/%d\n", ps.tu, ps.mau);
}

void main() {
    phanso a = { 4, 6 };  
    phanso b = { 2, 3 };  

    printf("Phan so A = ");
    in_phan_so(a);

    printf("Phan so B = ");
    in_phan_so(b);

    phanso tong = rut_gon_phan_so(cong_phan_so(a, b));
    printf("A + B = ");
    in_phan_so(tong);

    phanso hieu = rut_gon_phan_so(tru_phan_so(a, b));
    printf("A - B = ");
    in_phan_so(hieu);

    phanso tich = rut_gon_phan_so(Nhan_phan_so(a, b));
    printf("A * B = ");
    in_phan_so(tich);

    phanso thuong = rut_gon_phan_so(chia_phan_so(a, b));
    printf("A / B = ");
    in_phan_so(thuong);

    return 0;
}