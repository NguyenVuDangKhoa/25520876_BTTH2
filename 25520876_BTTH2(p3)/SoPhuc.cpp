#include "SoPhuc.h"
#include <iostream>
using namespace std;	
void SoPhuc:: Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}
void SoPhuc:: Xuat() {
    cout << iThuc;
    if (iAo >= 0)
        cout << " + " << iAo << "i";
    else
        cout << " - " << -iAo << "i";
}
// Tổng hai số phức được tính bằng cách cộng phần thực và phần ảo của chúng
SoPhuc SoPhuc:: Tong(SoPhuc b) {
    SoPhuc kq;
	// Tông phần thực và phần ảo của hai số phức
    kq.iThuc = iThuc + b.iThuc;
    kq.iAo = iAo + b.iAo;
	return kq; // Trả về kết quả tổng của hai số phức
}
// Hiệu hai số phức được tính bằng cách trừ phần thực và phần ảo của chúng
SoPhuc SoPhuc:: Hieu(SoPhuc b) {
    SoPhuc kq;
	// Hiệu phần thực và phần ảo của hai số phức
    kq.iThuc = iThuc - b.iThuc;
    kq.iAo = iAo - b.iAo;
	return kq; // Trả về kết quả hiệu của hai số phức
}
// Tích hai số phức được tính bằng cách sử dụng công thức: (a + bi)(c + di) = (ac - bd) + (ad + bc)i
SoPhuc SoPhuc:: Tich(SoPhuc b) {
    SoPhuc kq;
	// Tích hai số phức theo công thức: (a + bi)(c + di) = (ac - bd) + (ad + bc)i
    kq.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    kq.iAo = iThuc * b.iAo + iAo * b.iThuc;
	return kq; // Trả về kết quả tích của hai số phức
}
// Thương hai số phức được tính bằng cách sử dụng công thức: (a + bi) / (c + di) = [(ac + bd) + (bc - ad)i] / (c^2 + d^2)
SoPhuc SoPhuc:: Thuong(SoPhuc b) {
    SoPhuc kq;
	// Thương hai số phức theo công thức: (a + bi) / (c + di) = [(ac + bd) + (bc - ad)i] / (c^2 + d^2)
    float mau = b.iThuc * b.iThuc + b.iAo * b.iAo;

    kq.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau;
    kq.iAo = (iAo * b.iThuc - iThuc * b.iAo) / mau;

	return kq; // Trả về kết quả thương của hai số phức
}
