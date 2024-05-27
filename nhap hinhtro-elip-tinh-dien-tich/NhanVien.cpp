#include "NhanVien.h"
NhanVien::NhanVien(char ten[], long ma) {
	strcpy_s(Ten, ten);
	Ma = ma;
}
void NhanVien::Nhap() {
	cin.ignore();
	cout << "Nhap ten: ";cin.get(Ten, 50);
	cout << "Nhap ma: ";cin >> Ma;
}
void NhanVien::Xuat() {
	cout << Ten << " - " << Ma << " - ";
}
NhanVien::NhanVien() {
}