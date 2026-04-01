#pragma once
class SoPhuc
{
private:
    float iThuc;
    float iAo;

public:
    // Nhập
    void Nhap();
    // Xuất
    void Xuat();

    // Tổng
    SoPhuc Tong(SoPhuc b);
    // Hiệu
    SoPhuc Hieu(SoPhuc b);

    // Tích
    SoPhuc Tich(SoPhuc b);

    // Thương
    SoPhuc Thuong(SoPhuc b);
   
};



