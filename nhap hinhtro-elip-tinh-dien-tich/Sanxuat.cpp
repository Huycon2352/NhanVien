#include "Sanxuat.h"
Sanxuat::Sanxuat(char ten[], long ma, long lcb, int sosp) :NhanVien(ten, ma) {
	LCB = lcb;
	SOSP = sosp;
}
void Sanxuat::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap Luong Co Ban: "; cin >> LCB;
	cout << "Nhap So San Pham: ";cin >> SOSP;
}
long Sanxuat::Luong() {
	return LCB + SOSP * 100;
}
void Sanxuat::Xuat(){
	NhanVien::Xuat();
	cout << Luong() << endl;
}