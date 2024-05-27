#pragma once
#include "NhanVien.h"
class Vanphong:public NhanVien
{
	int SNLV;
public:
	Vanphong() {}
	Vanphong(char ten[], long ma,int snlv );
	void Nhap();
	long Luong();
	void Xuat();
};


