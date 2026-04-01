#include "SoPhuc.h"
#include <iostream>
using namespace std;
int main() {
	SoPhuc a, b;
	cout << "Nhap so phuc a: " << endl;
	a.Nhap();
	cout << "Nhap so phuc b: " << endl;
	b.Nhap();
	cout << "So phuc a: ";
	a.Xuat();
	cout << "\nSo phuc b: ";
	b.Xuat();
	SoPhuc tong = a.Tong(b);
	cout << "\nTong a + b: ";
	tong.Xuat();
	SoPhuc hieu = a.Hieu(b);
	cout << "\nHieu a - b: ";
	hieu.Xuat();
	SoPhuc tich = a.Tich(b);
	cout << "\nTich a * b: ";
	tich.Xuat();
	SoPhuc thuong = a.Thuong(b);
	cout << "\nThuong a / b: ";
	thuong.Xuat();
	return 0;
}
