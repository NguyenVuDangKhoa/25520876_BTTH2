#include "NgayThangNam.h"
#include <iostream>
using namespace std;
// Hàm kiểm tra năm nhuận
bool isLeapYear(int iNam)
{
	return (iNam % 400 == 0) || (iNam % 4 == 0 && iNam % 100 != 0); // Năm nhuận nếu chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100
}
// Hàm trả về số ngày trong tháng
int daysInMonth(int iThang, int iNam)
{
    switch (iThang)
    {
		// Các tháng có 31 ngày
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
		// Các tháng có 30 ngày
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
		// Tháng 2 có 28 hoặc 29 ngày tùy vào năm nhuận
    case 2:
        return isLeapYear(iNam) ? 29 : 28;
    default:
        return 0;
    }
}

void NgayThangNam:: Nhap()
{
	int dem = 0;
    do
    {
		if (dem > 0)
            cout << "Ngay thang nam khong hop le. Vui long nhap lai." << endl;
        cout << "Nhap ngay (day month year): ";
        cin >> iNgay >> iThang >> iNam;
		dem++;
        
	} while (iNam <= 0 || iThang < 1 || iThang>12 || iNgay<1 || iNgay > daysInMonth(iThang, iNam)); // Kiểm tra tính hợp lệ của ngày tháng năm
}
void NgayThangNam:: Xuat()
{
	cout << iNgay << "/" << iThang << "/" << iNam << endl; // Xuât ngày tháng năm theo định dạng dd/mm/yyyy

}
NgayThangNam NgayThangNam::NgayThangNamTiepTheo()
{
	// Tạo một đối tượng NgayThangNam mới để lưu ngày tiếp theo
    NgayThangNam nextDate;
    nextDate.iNgay = iNgay + 1;
    nextDate.iThang = iThang;
    nextDate.iNam = iNam;
	// Kiểm tra nếu ngày vượt quá số ngày trong tháng hiện tại
	if (nextDate.iNgay > daysInMonth(iThang, iNam)) // Nếu ngày vượt quá số ngày trong tháng
    {
		nextDate.iNgay = 1; // Reset ngày về 1
		nextDate.iThang++;// Tăng tháng lên 1
		if (nextDate.iThang > 12) // Kiểm tra nếu tháng vượt quá 12
        {
			nextDate.iThang = 1; // Reset tháng về 1
			nextDate.iNam++; // Tăng năm lên 1
        }
    }
	return nextDate; // Trả về đối tượng NgayThangNam mới chứa ngày tiếp theo
}
