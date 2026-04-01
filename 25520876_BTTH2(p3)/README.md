void SoPhuc::Nhap() 
// nhập iThuc, iAo từ bàn phím và gán cho đối tượng hiện tại

void SoPhuc::Xuat() 
// xuất số phức dạng a + bi, nếu iAo < 0 thì in dạng a - |b|i

SoPhuc SoPhuc::Tong(SoPhuc b) 
// truyền vào SoPhuc b, tạo kq, phần thực = iThuc + b.iThuc, phần ảo = iAo + b.iAo, trả về kq

SoPhuc SoPhuc::Hieu(SoPhuc b) 
// truyền vào SoPhuc b, tạo kq, phần thực = iThuc - b.iThuc, phần ảo = iAo - b.iAo, trả về kq

SoPhuc SoPhuc::Tich(SoPhuc b) 
// truyền vào SoPhuc b, tạo kq, phần thực = iThuc*b.iThuc - iAo*b.iAo, phần ảo = iThuc*b.iAo + iAo*b.iThuc, trả về kq

SoPhuc SoPhuc::Thuong(SoPhuc b) 
// truyền vào SoPhuc b, tạo kq, mau = b.iThuc^2 + b.iAo^2, phần thực = (iThuc*b.iThuc + iAo*b.iAo)/mau, phần ảo = (iAo*b.iThuc - iThuc*b.iAo)/mau, trả về kq
