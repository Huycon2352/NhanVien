#pragma once
#include "NhanVien.h"
class Sanxuat:public NhanVien
{
private:
	long LCB;
	int SOSP;
public:
	Sanxuat() {}
	Sanxuat(char ten[],long ma,long lcb,int sosp);
	void Nhap();
	long Luong();
	void Xuat();
};
