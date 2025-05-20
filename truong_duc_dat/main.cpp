#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // sort
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
    double diemTB;

public:
    void setLop(string l) { lop = l; }
    void setDiemTB(double d) { diemTB = d; }

    string getLop() const { return lop; }
    double getDiemTB() const { return diemTB; }

    void xuatThongTin() const override {
        cout << "== Hoc sinh ==" << endl;
        thongtincanhan::xuatThongTin();
        cout << "Lop: " << lop << endl;
        cout << "Diem TB: " << diemTB << endl;
    }
};

// Main
int main() {
    vector<HocSinh> danhSach;

    // Thêm dữ liệu mẫu
    HocSinh hs1;
    hs1.setTen("Nguyen Van A");
    hs1.setTuoi(17);
    hs1.setGioiTinh(Nam);
    hs1.setLop("12A1");
    hs1.setDiemTB(8.6);
    danhSach.push_back(hs1);

    HocSinh hs2;
    hs2.setTen("Tran Thi B");
    hs2.setTuoi(16);
    hs2.setGioiTinh(Nu);
    hs2.setLop("11B2");
    hs2.setDiemTB(9.1);
    danhSach.push_back(hs2);

    HocSinh hs3;
    hs3.setTen("Le Van C");
    hs3.setTuoi(18);
    hs3.setGioiTinh(Nam);
    hs3.setLop("12C3");
    hs3.setDiemTB(7.5);
    danhSach.push_back(hs3);

    // Sắp xếp theo điểm trung bình giảm dần
    sort(danhSach.begin(), danhSach.end(), [](const HocSinh& a, const HocSinh& b) {
        return a.getDiemTB() > b.getDiemTB();
        });

    // Xuất danh sách sau khi sắp xếp
    cout << "\n=== Danh sach hoc sinh sap xep theo diem TB giam dan ===\n";
    for (const HocSinh& hs : danhSach) {
        hs.xuatThongTin();
        cout << "----------------------" << endl;
    }

    return 0;
}
