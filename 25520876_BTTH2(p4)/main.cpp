#include "GioPhutGiay.h"
#include<iostream>
using namespace std;
int main()
{
	GioPhutGiay a;
	cout << "Nhap gio, phut, giay: " << endl;
	a.Nhap();
	cout << "Gio, phut, giay ban dau: " ;
	a.Xuat();
	cout << endl;
	cout << "Gio, phut, giay sau khi cong them mot giay: " ;
	a.TinhCongThemMotGiay().Xuat();	

	return 0;
}


