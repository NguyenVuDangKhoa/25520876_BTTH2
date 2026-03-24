#include<iostream>
#include"PhanSo.h"
using namespace std;
int main()
{
	PhanSo a, b;
	a.Nhap();
	b.Nhap();
    cout << "Cong:";
    a.TinhTong(b).Xuat();
	cout << "Tru:";
	a.TinhHieu(b).Xuat();
	cout << "Nhan:";
	a.TinhNhan(b).Xuat();
	cout << "Chia:";
	a.TinhThuong(b).Xuat();
	cout << "So Sanh " << endl;
	a.SoSanh(b);
}