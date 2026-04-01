// tính UCLN bằng đệ quy: nếu b=0 trả a, ngược lại gọi UCLN(b, a%b)
int UCLN(int a, int b)

// nhập iTu, iMau; lặp đến khi iMau ≠ 0 (mẫu hợp lệ)
void PhanSo::Nhap()

// xuất phân số dạng tử/mẫu (vd: 3/4)
void PhanSo::Xuat()

// rút gọn phân số: tìm UCLN rồi chia cả tử và mẫu, đồng thời xử lý dấu âm về tử
void PhanSo::RutGon()

// truyền vào PhanSo a; quy đồng mẫu, cộng tử: (iTu*a.iMau + a.iTu*iMau)/(iMau*a.iMau), rút gọn, trả về kq
PhanSo PhanSo::Tong(PhanSo a)

// truyền vào PhanSo a; quy đồng mẫu, trừ tử: (iTu*a.iMau - a.iTu*iMau)/(iMau*a.iMau), rút gọn, trả về kq
PhanSo PhanSo::Hieu(PhanSo a)

// truyền vào PhanSo a; nhân tử và mẫu: (iTu*a.iTu)/(iMau*a.iMau), rút gọn, trả về kq
PhanSo PhanSo::Nhan(PhanSo a)

// truyền vào PhanSo a; nhân chéo: (iTu*a.iMau)/(iMau*a.iTu), rút gọn, trả về kq
PhanSo PhanSo::Thuong(PhanSo a)

// truyền vào PhanSo a; lấy hiệu rồi xét dấu tử: <0 nhỏ hơn, =0 bằng, >0 lớn hơn, sau đó in kết quả
void PhanSo::SoSanh(PhanSo a)
