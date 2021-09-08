#include<bits/stdc++.h>

using namespace std;

class LopHoc;

class Nguoi
{
protected:
	char HoTen[20];
	char NS[15];
	char QueQuan[30];
	public:
		void nhap();
		void xuat();	
};

void Nguoi::nhap()
{
	cout<<"Ho ten: "; fflush(stdin); gets(HoTen);
	cout<<"Ngay sinh: "; fflush(stdin); gets(NS);
	cout<<"Que quan: "; fflush(stdin); gets(QueQuan);
}
void Nguoi::xuat()
{
	cout<<setw(20)<<HoTen<<setw(20)<<NS<<setw(20)<<QueQuan<<endl;
}
class SV: public Nguoi
{
	char MaSV[10];
	char Nganh[30];
	int KH;
public:
	void nhap();
	void xuat();
	friend class LopHoc;
};
void SV::nhap()
{
	cout<<"Ma sinh vien: "; fflush(stdin); gets(MaSV);
	cout<<"Nganh hoc: "; fflush(stdin); gets(Nganh);
	cout<<"Khoa hoc: "; cin>>KH;
	Nguoi::nhap();
}
void SV::xuat()
{
	cout<<setw(10)<<MaSV<<setw(10)<<Nganh<<setw(10)<<KH;
	Nguoi::xuat();
}
class LopHoc
{
	char MaLH[10];
	char TenLH[20];
	char NgayMo[15];
	SV *x;
	int n;
	char GV[20];
	public:
		void nhap();
		void xuat();
};

void LopHoc::nhap()
{
	cout<<"Ma lop hoc: "; fflush(stdin); gets(MaLH);
	cout<<"Ten lop hoc: "; fflush(stdin); gets(TenLH);
	cout<<"Ngay mo lop: "; fflush(stdin); gets(NgayMo);
	cout<<"Giao vien phu trach: "; fflush(stdin); gets(GV);
	cout<<"Nhap vao so sinh vien cua lop: "; cin>>n;
	x = new SV[n];
	for(int i=0; i<n; i++){
		cout<<"Sinh vien thu "<<i+1<<": "<<endl;
		x[i].nhap();
	}
}
void LopHoc::xuat()
{
	cout<<"Ma lop hoc: "<<MaLH<<endl;
	cout<<"Ten lop hoc: "<<TenLH<<endl;
	cout<<"Ngay mo lop: "<<NgayMo<<endl;
	cout<<"Giao vien phu trach: "<<GV<<endl;
	for(int i=0; i<n; i++)
		x[i].xuat();
}

int main()
{
	LopHoc a;
	a.nhap();
	a.xuat();
}
