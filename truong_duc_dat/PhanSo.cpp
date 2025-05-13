#include "PhanSo.h"
#include <iostream>
#include <numeric>
#include <stdexcept>
using namespace std;
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

PhanSo::PhanSo(int tu, int mau) : tu(tu), mau(mau) {
    rutGon();
}

void PhanSo::rutGon() {
    if (mau == 0) {
        throw runtime_error("Mau so khong duoc bang 0!");
    }

    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }

    int ucln = gcd(tu, mau);
    tu /= ucln;
    mau /= ucln;
}

void PhanSo::hienThi() const {
    cout << tu << "/" << mau << endl;
}

PhanSo PhanSo::cong(const PhanSo& ps) const {
    int newTu = tu * ps.mau + ps.tu * mau;
    int newMau = mau * ps.mau;
    return PhanSo(newTu, newMau);
}

PhanSo PhanSo::tru(const PhanSo& ps) const {
    int newTu = tu * ps.mau - ps.tu * mau;
    int newMau = mau * ps.mau;
    return PhanSo(newTu, newMau);
}

PhanSo PhanSo::nhan(const PhanSo& ps) const {
    return PhanSo(tu * ps.tu, mau * ps.mau);
}

PhanSo PhanSo::chia(const PhanSo& ps) const {
    if (ps.tu == 0) {
        throw runtime_error("Khong the chia cho phan so co tu = 0!");
    }
    return PhanSo(tu * ps.mau, mau * ps.tu);
}

bool PhanSo::lonHon(const PhanSo& ps) const {
    return tu * ps.mau > ps.tu * mau;
}

bool PhanSo::nhoHon(const PhanSo& ps) const {
    return tu * ps.mau < ps.tu * mau;
}

bool PhanSo::lonHonHoacBang(const PhanSo& ps) const {
    return tu * ps.mau >= ps.tu * mau;
}

bool PhanSo::nhoHonHoacBang(const PhanSo& ps) const {
    return tu * ps.mau <= ps.tu * mau;
}

bool PhanSo::bangNhau(const PhanSo& ps) const {
    return tu * ps.mau == ps.tu * mau;
}
