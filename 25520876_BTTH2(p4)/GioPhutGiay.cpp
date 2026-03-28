#include "GioPhutGiay.h"
#include <iostream>
using namespace std;
void GioPhutGiay:: Nhap()
{
    do {
        cout << " Nhap gio: ";
        cin >> iGio;
        cout << " Nhap phut: ";
        cin >> iPhut;
        cout << " Nhap giay: ";
        cin >> iGiay;
        if(iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59)
			cout << " Nhap sai, vui long nhap lai! " << endl;
    }
	while (iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59); // kiêm tra điều kiện nhập hợp lệ, nếu không hợp lệ sẽ yêu cầu nhập lại

}
void GioPhutGiay:: Xuat()
{
	printf("%dh%dm%ds", iGio, iPhut, iGiay); // xuất giờ, phút, giây theo định dạng "h m s"
}
GioPhutGiay GioPhutGiay :: TinhCongThemMotGiay()
{
	
    iGiay++;
	if (iGiay == 60) // nếu giây vượt quá 59, reset giây về 0 và tăng phút lên 1
    {
        iGiay = 0;
        iPhut++;
		if (iPhut == 60) // nếu phút vượt quá 59, reset phút về 0 và tăng giờ lên 1
        {
            iPhut = 0;
            iGio++;
        }
		if (iGio == 24) // nếu giờ vượt quá 23, reset giờ về 0
        {
            iGio = 0;
        }
    }
	return *this; // trả về đối tượng hiện tại sau khi đã được cập nhật giờ, phút, giây
    
}



