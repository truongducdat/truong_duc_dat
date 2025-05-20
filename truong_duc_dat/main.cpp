#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

enum gioi_tinh {
    Nam, Nu
};

// Lớp cha: Thông tin cá nhân
class thongtincanhan {
protected:
    string name;
    int age;
    gioi_tinh gioitinh;

public:
    void setTen(string t) { name = t; }
    void setTuoi(int a) { age = a; }
    void setGioiTinh(gioi_tinh g) { gioitinh = g; }

    string getTen() const { return name; }
    int getTuoi() const { return age; }
    gioi_tinh getGioiTinh() const { return gioitinh; }

    virtual void xuatThongTin() const {
        cout << "Ten: " << name << endl;
        cout << "Tuoi: " << age << endl;
        cout << "Gioi tinh: " << (gioitinh == Nam ? "Nam" : "Nu") << endl;
    }

    virtual ~thongtincanhan() {}
};

// Lớp con: Học sinh
class HocSinh : public thongtincanhan {
private:
    string lop;
    double diemToan;
    double diemVan;

public:
    void setLop(string l) { lop = l; }
    void setDiemToan(double d) { diemToan = d; }
    void setDiemVan(double d) { diemVan = d; }

    string getLop() const { return lop; }
    double getDiemToan() const { return diemToan; }
    double getDiemVan() const { return diemVan; }
    double getDiemTB() const { return (diemToan + diemVan) / 2.0; }

    void xuatThongTin() const override {
        cout << "== Hoc sinh ==" << endl;
        thongtincanhan::xuatThongTin();
        cout << "Lop: " << lop << endl;
        cout << "Diem Toan: " << diemToan << endl;
        cout << "Diem Van: " << diemVan << endl;
        cout << "Diem Trung Binh: " << getDiemTB() << endl;
    }
};

int main() {
    vector<HocSinh> danhSach;

    // Thêm học sinh
    HocSinh hs1;
    hs1.setTen("Nguyen Van A");
    hs1.setTuoi(17);
    hs1.setGioiTinh(Nam);
    hs1.setLop("12A1");
    hs1.setDiemToan(9.0);
    hs1.setDiemVan(8.0);
    danhSach.push_back(hs1);

    HocSinh hs2;
    hs2.setTen("Tran Thi B");
    hs2.setTuoi(16);
    hs2.setGioiTinh(Nu);
    hs2.setLop("11B2");
    hs2.setDiemToan(8.5);
    hs2.setDiemVan(9.0);
    danhSach.push_back(hs2);

    HocSinh hs3;
    hs3.setTen("Le Van C");
    hs3.setTuoi(18);
    hs3.setGioiTinh(Nam);
    hs3.setLop("12C3");
    hs3.setDiemToan(7.0);
    hs3.setDiemVan(6.5);
    danhSach.push_back(hs3);

    // Sắp xếp theo điểm trung bình giảm dần
    sort(danhSach.begin(), danhSach.end(), [](const HocSinh& a, const HocSinh& b) {
        return a.getDiemTB() > b.getDiemTB();
        });

    // Xuất danh sách
    cout << "\n=== Danh sach hoc sinh theo diem TB giam dan ===\n";
    for (const HocSinh& hs : danhSach) {
        hs.xuatThongTin();
        cout << "----------------------" << endl;
    }

    return 0;
}
