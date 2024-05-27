#pragma once
#include <iostream>
#include <string>
using namespace std;
class NhanVien
{
private:
	char Ten[50];
	long Ma;
public:
	NhanVien();
	NhanVien(char ten[], long ma);
	virtual long Luong() = 0;
	virtual void Nhap();
	virtual void Xuat();
};


