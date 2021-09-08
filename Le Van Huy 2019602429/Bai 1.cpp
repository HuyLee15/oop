#include <bits/stdc++.h>

using namespace std;

class CONGTY;

class NGUOI
{
protected:
	char HoTen[50];
	int Tuoi;
	char GioiTinh[5];
public:
	void nhap();
	void xuat();
};

void NGUOI::nhap()
{
	cout<<"Ho va ten: "; fflush(stdin); gets(HoTen);
	cout<<"Tuoi: "; cin>>Tuoi;
	cout<<"Gioi tinh: "; fflush(stdin); gets(GioiTinh);
}
void NGUOI::xuat()
{
	cout<<setw(20)<<HoTen<<setw(10)<<Tuoi<<setw(20)<<GioiTinh;
}

class NHANVIEN: public NGUOI
{
	char MaNV[20];
	char ChucVu[50];
	float Luong;
public:
	void nhap();
	void xuat();
	friend class CONGTY;
};

void NHANVIEN::nhap()
{
	NGUOI::nhap();
	cout<<"Ma nhan vien: "; fflush(stdin); gets(MaNV);
	cout<<"Chuc vu: "; fflush(stdin); gets(ChucVu);
	cout<<"Luong: "; cin>>Luong;
	cout<<endl;
}
void NHANVIEN::xuat()
{
	NGUOI::xuat();
	cout<<setw(20)<<MaNV<<setw(20)<<ChucVu<<setw(20)<<Luong<<endl;
}

class CONGTY
{
	char MaCT[20]; 
	char DiaChi[100];
	NHANVIEN *x;
	int n;
public:
	void nhap();
	void xuat();
};

void CONGTY::nhap()
{
	cout<<"Ma cong ty: "; fflush(stdin); gets(MaCT);
	cout<<"Dia chi: "; fflush(stdin); gets(DiaChi);
	cout<<"So nhan vien cua cong ty: "; cin>>n;
	x = new NHANVIEN[n];
	for(int i=0; i<n; i++){
		cout<<"Nhan vien thu "<<i+1<<": "<<endl;
		x[i].nhap();
	}
}
void CONGTY::xuat()
{
	cout<<"Ma cong ty: "<<MaCT<<endl;
	cout<<"Dia chi: "<<DiaChi<<endl;
	cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Tuoi"<<setw(20)<<"Gioi tinh"<<setw(20)<<"Ma nhan vien"<<setw(20)<<"Chuc vu"<<setw(20)<<"Luong"<<endl;
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
}
int main()
{
	CONGTY A;
	A.nhap();
	cout<<"Xuat thong tin cong ty vua nhap: "<<endl;
	A.xuat();
	
	return 0;
}
