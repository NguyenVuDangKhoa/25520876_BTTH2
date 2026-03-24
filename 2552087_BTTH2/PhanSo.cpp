#include "PhanSo.h"
#include<iostream>
using namespace std;
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
    while (iMau == 0)
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
        iTu = abs(iTu / kq);
        iMau = abs(iMau / kq);
    }

    else if (iTu < 0)
    {
        kq = UCLN(iTu,iMau);
        iTu = iTu / kq;
        iMau = iMau / kq;

    }
    else if (iMau < 0)
    {
        kq = UCLN(iTu, iMau);
        iTu = -iTu / kq;
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
    PhanSo kq=TinhHieu(a);
   
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