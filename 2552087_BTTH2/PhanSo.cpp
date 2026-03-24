#include "PhanSo.h"
#include<iostream>
using namespace std;
// Hàm tính ước chung lớn nhất (UCLN) của hai số nguyên, VD : UCLN(12, 15) = 3, UCLN(18, 24) = 6
int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (b == 0)
        return a;
    return UCLN(b, a % b);

}
void PhanSo::Nhap() {
    cin >> iTu;
    cin >> iMau;
	while (iMau == 0) // Mẫu số không được bằng 0, nếu người dùng nhập mẫu số bằng 0 thì sẽ yêu cầu nhập lại
    {
        cin >> iTu;
        cin >> iMau;
    }
}
void PhanSo::Xuat() {
    cout << iTu;
    cout << "/";
    cout << iMau;
    cout << " ";
}
void PhanSo::RutGon() {
    int kq;
    if (iTu < 0 && iMau < 0)
    {

        kq = UCLN(iTu, iMau);
		iTu = abs(iTu / kq);   // Triệt tiêu dấu âm ở tử và mẫu
        iMau = abs(iMau / kq);
    }

    else if (iTu < 0)
    {
        kq = UCLN(iTu,iMau);
		iTu = iTu / kq;  // Dấu âm ở tử vẫn giữ nguyên, chỉ triệt tiêu dấu âm ở mẫu
        iMau = iMau / kq;

    }
    else if (iMau < 0)
    {
        kq = UCLN(iTu, iMau);
		iTu = -iTu / kq;     // Triệt tiêu dấu âm ở mẫu, đồng thời chuyển dấu âm sang tử
        iMau = abs(iMau / kq);

    }
    else
    {
        kq = UCLN(iTu, iMau);
        iTu = iTu / kq;
        iMau = iMau / kq;
    }

}

PhanSo PhanSo:: TinhTong(PhanSo a){
    PhanSo kq;
    kq.iMau = a.iMau * iMau;
    kq.iTu = (iTu * a.iMau) + (a.iTu * iMau);
    kq.RutGon();
    return kq;
}
PhanSo PhanSo::TinhHieu(PhanSo a) {
    PhanSo kq;
    kq.iMau = a.iMau * iMau;
    kq.iTu = (iTu * a.iMau) - (a.iTu * iMau);
    kq.RutGon();
    return kq;
}
PhanSo PhanSo::TinhNhan(PhanSo a) {
    PhanSo kq;
    kq.iMau = a.iMau * iMau;
    kq.iTu = a.iTu * iTu;
    kq.RutGon();
    return kq;
}
PhanSo PhanSo:: TinhThuong(PhanSo a) {
    PhanSo kq;
    kq.iMau =iMau*a.iTu;
    kq.iTu = iTu*a.iMau;
    kq.RutGon();
    return kq;
}
void PhanSo::SoSanh(PhanSo a) {
	PhanSo kq = TinhHieu(a); // Tính hiệu của hai phân số, nếu kết quả là phân số âm thì phân số hiện tại nhỏ hơn phân số a, nếu kết quả là phân số dương thì phân số hiện tại lớn hơn phân số a, nếu kết quả là phân số bằng 0 thì hai phân số bằng nhau
   
    if (kq.iTu < 0) {
        Xuat(); cout << "nho hon"; a.Xuat();
    }
    else if (kq.iTu == 0) {
        Xuat(); cout << "bang nhau";a.Xuat();
    }
    else {
        Xuat(); cout << "lon hon";a.Xuat();
    }
}
