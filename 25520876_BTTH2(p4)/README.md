// nhập iGio, iPhut, iGiay; lặp đến khi hợp lệ (0≤giờ≤23, 0≤phút≤59, 0≤giây≤59)
void GioPhutGiay::Nhap()

// xuất giờ phút giây dạng "h m s" (vd: 10h20m30s)
void GioPhutGiay::Xuat()

// tăng iGiay lên 1; nếu =60 thì reset giây=0 tăng phút; nếu phút=60 reset=0 tăng giờ; nếu giờ=24 reset=0; trả về đối tượng hiện tại
GioPhutGiay GioPhutGiay::TinhCongThemMotGiay()
