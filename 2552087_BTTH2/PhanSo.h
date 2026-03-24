#pragma once
class PhanSo
{
private:
		int iTu, iMau;
public:
		void Nhap();
		void Xuat();
		void RutGon();
		PhanSo TinhTong(PhanSo a);
		PhanSo TinhHieu(PhanSo a);
		PhanSo TinhNhan(PhanSo a);
		PhanSo TinhThuong(PhanSo a);
		void SoSanh(PhanSo a);

	

};

