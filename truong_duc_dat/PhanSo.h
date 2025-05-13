#ifndef PHANSO_H
#define PHANSO_H

class PhanSo {
private:
    int tu;  // T? s?
    int mau; // M?u s?

    void rutGon();

public:
    PhanSo(int tu = 0, int mau = 1);

    void hienThi() const;

    PhanSo cong(const PhanSo& ps) const;
    PhanSo tru(const PhanSo& ps) const;
    PhanSo nhan(const PhanSo& ps) const;
    PhanSo chia(const PhanSo& ps) const;

    bool lonHon(const PhanSo& ps) const;
    bool nhoHon(const PhanSo& ps) const;
    bool lonHonHoacBang(const PhanSo& ps) const;
    bool nhoHonHoacBang(const PhanSo& ps) const;
    bool bangNhau(const PhanSo& ps) const;
};

#endif
