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
	return UCLN(b, a % b); // Sử dụng đệ quy để tính UCLN, nếu b bằng 0 thì UCLN là a, ngược lại ta gọi đệ quy với b và phần dư của a chia cho b

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
void PhanSo::Xuat() { // Xuất phân số dưới dạng "tử/mẫu", VD : 1/2, 3/4, 5/6
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

PhanSo PhanSo:: Tong(PhanSo a){
    PhanSo kq;
	// Tính tổng của hai phân số bằng cách quy đồng mẫu số, sau đó cộng tử số lại với nhau, VD : 1/2 + 1/3 = (1*3 + 1*2) / (2*3) = 5/6
    kq.iMau = a.iMau * iMau;
    kq.iTu = (iTu * a.iMau) + (a.iTu * iMau);
	kq.RutGon(); // Sau khi tính tổng, ta sẽ rút gọn phân số kết quả bằng cách gọi hàm RutGon() để tìm ước chung lớn nhất của tử số và mẫu số, sau đó chia cả tử số và mẫu số cho ước chung lớn nhất đó để được phân số tối giản
	return kq; // Trả về phân số kết quả sau khi đã được rút gọn
}
PhanSo PhanSo::Hieu(PhanSo a) {
    PhanSo kq;
	// Tính hiệu của hai phân số bằng cách quy đồng mẫu số, sau đó trừ tử số của phân số thứ hai cho tử số của phân số thứ nhất, VD : 1/2 - 1/3 = (1*3 - 1*2) / (2*3) = 1/6
    kq.iMau = a.iMau * iMau;
    kq.iTu = (iTu * a.iMau) - (a.iTu * iMau);
	kq.RutGon(); // Sau khi tính hiệu, ta sẽ rút gọn phân số kết quả bằng cách gọi hàm RutGon() để tìm ước chung lớn nhất của tử số và mẫu số, sau đó chia cả tử số và mẫu số cho ước chung lớn nhất đó để được phân số tối giản
	return kq;// Trả về phân số kết quả sau khi đã được rút gọn
}
PhanSo PhanSo::Nhan(PhanSo a) {
    PhanSo kq;
	// Tính tích của hai phân số bằng cách nhân tử số của hai phân số với nhau để được tử số của kết quả, và nhân mẫu số của hai phân số với nhau để được mẫu số của kết quả, VD : 1/2 * 1/3 = (1*1) / (2*3) = 1/6
    kq.iMau = a.iMau * iMau;
    kq.iTu = a.iTu * iTu;
	kq.RutGon(); // Sau khi tính tích, ta sẽ rút gọn phân số kết quả bằng cách gọi hàm RutGon() để tìm ước chung lớn nhất của tử số và mẫu số, sau đó chia cả tử số và mẫu số cho ước chung lớn nhất đó để được phân số tối giản
	return kq; // Trả về phân số kết quả sau khi đã được rút gọn
}
PhanSo PhanSo:: Thuong(PhanSo a) {
    PhanSo kq;
	// Tính thương của hai phân số bằng cách nhân tử số của phân số thứ nhất với mẫu số của phân số thứ hai để được tử số của kết quả, và nhân mẫu số của phân số thứ nhất với tử số của phân số thứ hai để được mẫu số của kết quả, VD : 1/2 / 1/3 = (1*3) / (2*1) = 3/2
    kq.iMau =iMau*a.iTu;
    kq.iTu = iTu*a.iMau;
	kq.RutGon(); // Sau khi tính thương, ta sẽ rút gọn phân số kết quả bằng cách gọi hàm RutGon() để tìm ước chung lớn nhất của tử số và mẫu số, sau đó chia cả tử số và mẫu số cho ước chung lớn nhất đó để được phân số tối giản
	return kq; // Trả về phân số kết quả sau khi đã được rút gọn
}
void PhanSo::SoSanh(PhanSo a) {
	PhanSo kq = Hieu(a); // Tính hiệu của hai phân số, nếu kết quả là phân số âm thì phân số hiện tại nhỏ hơn phân số a, nếu kết quả là phân số dương thì phân số hiện tại lớn hơn phân số a, nếu kết quả là phân số bằng 0 thì hai phân số bằng nhau
   
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
