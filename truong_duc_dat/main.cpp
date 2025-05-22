#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
class giai_phuong_trinh_bac_2 {
public:
    double a, b, c;
public:
    void nhap() {
        cout << "nhap he so a,b,c: ";
        cin >> a >> b >> c;
        while (a == 0) {
            cout << "he so a phai khac 0, nhap lai: ";
            cin >> a;
        }
    }
    double delta() {
        return b * b - 4 * a * c;
    }
    void giaiphuongtrinh() {
        double g = delta();
        if (g < 0) {
            cout << "phuong trinh vo nghiem"<<endl;
        }
        else if (g == 0) {
            double d = -b / (2 * a);
            cout << "phuong trinh co nghiem duy nhat x = " << d << endl;
        }
        else {
            double x1 = (-b - sqrt(g)) / (2 * a);
            double x2 = (-b + sqrt(g)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem:\n";
            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;

        }
    }
};


int main() {
    giai_phuong_trinh_bac_2 cal;
    cal.nhap();
    cal.giaiphuongtrinh();

    return 0;
}
