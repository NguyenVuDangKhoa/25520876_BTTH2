#pragma once
class PhanSo
{
private:
		int iTu, iMau;
public:
		void Nhap();
		void Xuat();
		void RutGon();
		PhanSo Tong(PhanSo a);
		PhanSo Hieu(PhanSo a);
		PhanSo Nhan(PhanSo a);
		PhanSo Thuong(PhanSo a);
		void SoSanh(PhanSo a);

	

};

