#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
    PhanSo a(3, 4);
    PhanSo b(2, 5);

    cout << "Phan so a = ";
    a.hienThi();
    cout << "Phan so b = ";
    b.hienThi();

    cout << "\nTong: ";
    a.cong(b).hienThi();

    cout << "Hieu: ";
    a.tru(b).hienThi();

    cout << "Tich: ";
    a.nhan(b).hienThi();

    cout << "Thuong: ";
    a.chia(b).hienThi();

    cout << "\nSo sanh:\n";
    cout << "a > b? " << (a.lonHon(b) ? "Dung" : "Sai") << endl;
    cout << "a < b? " << (a.nhoHon(b) ? "Dung" : "Sai") << endl;
    cout << "a >= b? " << (a.lonHonHoacBang(b) ? "Dung" : "Sai") << endl;
    cout << "a <= b? " << (a.nhoHonHoacBang(b) ? "Dung" : "Sai") << endl;
    cout << "a == b? " << (a.bangNhau(b) ? "Dung" : "Sai") << endl;

    return 0;
}
