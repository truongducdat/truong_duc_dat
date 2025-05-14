#include"toan.h"
int Cong(int x, int y) {
	int ketqua = 0;
	ketqua = x + y;
	return ketqua;
}
int Nhan(int x, int y) {
	int ketqua = 0;
	for (int i = 0; i < y; i++) {
		ketqua = Cong(ketqua, x);
	}	
	return ketqua;
}