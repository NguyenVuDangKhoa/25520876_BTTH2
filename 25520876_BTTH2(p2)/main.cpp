#include "NgayThangNam.h"
#include <iostream>
using namespace std;
int main()
{
	NgayThangNam a;
	a.Nhap();
	cout << "Ngay thang nam vua nhap: ";	
	a.Xuat();	
	cout << "Ngay thang nam tiep theo: ";
	a.NgayThangNamTiepTheo().Xuat(); // Gọi hàm NgayThangNamTiepTheo để tính và xuất ngày tiếp theo
}
