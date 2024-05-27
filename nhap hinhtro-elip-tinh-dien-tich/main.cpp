#include "Sanxuat.h"
#include "Vanphong.h"
bool inType(int Type, NhanVien* &p) {
	if (Type == 1) p = new Sanxuat;
	else if (Type == 2) p = new Vanphong;
	else return false;
	return true;
}
int main() {
	int Type;
	int n;
	cout << "Bao nhieu nguoi: ";
	cin >> n;
	NhanVien** ds = new NhanVien * [n];
	for (int i = 0;i < n;i++) {
		cout <<"Nguoi thu "<<i+1<< " thuoc nhom: ";
		cin >> Type;
		if (!inType(Type, ds[i])) {
			cout << "Nhap lai loai: ";
			i--;continue;
		}cout << "Nguoi thu " << i + 1 << endl;
		ds[i]->Nhap();
	}
	for (int i = 0;i < n;i++) {
		ds[i]->Xuat();
	}
	system("pause");
}