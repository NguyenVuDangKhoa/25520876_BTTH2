// kiểm tra năm nhuận: trả về true nếu iNam chia hết 400 hoặc chia hết 4 nhưng không chia hết 100
bool isLeapYear(int iNam)

// truyền vào tháng, năm; dùng switch xác định số ngày (31, 30, hoặc 28/29 nếu tháng 2 dựa vào năm nhuận)
int daysInMonth(int iThang, int iNam)

// nhập iNgay, iThang, iNam; lặp lại đến khi hợp lệ (ngày >0, tháng 1-12, ngày <= số ngày trong tháng)
void NgayThangNam::Nhap()

// xuất ngày tháng năm theo định dạng dd/mm/yyyy
void NgayThangNam::Xuat()

// tạo nextDate = ngày hiện tại +1; nếu vượt số ngày trong tháng thì reset ngày=1, tăng tháng; nếu tháng >12 thì reset tháng=1, tăng năm; trả về nextDate
NgayThangNam NgayThangNam::NgayThangNamTiepTheo()
