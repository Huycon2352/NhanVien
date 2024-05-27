#include "Vanphong.h"
Vanphong::Vanphong(char ten[], long ma, int snlv) :NhanVien(ten, ma) {
	SNLV = snlv;
}
void Vanphong::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap So Ngay Lam Viec: ";cin >> SNLV;

}
long Vanphong::Luong() {
	return SNLV * 500;
}
void Vanphong::Xuat() {
	NhanVien::Xuat();
	cout << Luong() << endl;
}