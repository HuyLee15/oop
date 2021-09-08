#include <bits/stdc++.h>
using namespace std;

struct NgaySinh
{
	int Ngay;
	int Thang;
	int Nam;
};

class NhanSu
{
protected:
	char HoTen[50];
	char GioiTinh[5];
	NgaySinh NamSinh;
	char DiaChi[100];
};

class CongChuc: public NhanSu
{
	char NganhNghe[20];
	int NamVaoCQ;
	char TrinhDo[50];
	float HSLuong;
	float PHCap;
public:
	void nhap();
	void xuat();
	float thunhap();
	friend void minThuNhap(CongChuc *a, int n);
	friend void sapXep(CongChuc *a, int n);
};

void CongChuc::nhap(){
	cout<<"Ho Ten: "; fflush(stdin); gets(HoTen);
	cout<<"Ngay sinh: "<<endl;
	cout<<"\tNgay: "; cin>>NamSinh.Ngay;
	cout<<"\tThang: "; cin>>NamSinh.Thang;
	cout<<"\tNam: "; cin>>NamSinh.Nam;
	cout<<"Dia chi: "; fflush(stdin); gets(DiaChi);
	cout<<"Nganh Nghe: "; fflush(stdin); gets(NganhNghe);
	cout<<"Nam vao co quan: "; cin>>NamVaoCQ;
	cout<<"Trinh do: "; fflush(stdin); gets(TrinhDo);
	cout<<"HS Luong: "; cin>>HSLuong;
	cout<<"Phu cap: "; cin>>PHCap;
}
void CongChuc::xuat()
{
	cout<<setw(20)<<HoTen<<setw(20)<<NamSinh.Ngay<<"-"<<NamSinh.Thang<<"-"<<NamSinh.Nam<<setw(20)<<DiaChi<<setw(20)<<NganhNghe<<setw(10)<<
	NamVaoCQ<<setw(20)<<TrinhDo<<setw(10)<<HSLuong<<setw(10)<<PHCap<<endl;
}
float CongChuc::thunhap()
{
	return (HSLuong*830 + PHCap);
}

void minThuNhap(CongChuc *a, int n)
{
	float min = a[0].thunhap();
	for(int i=1; i<n; i++){
		if(a[i].thunhap()>min) min = a[i].thunhap();
	}
	cout<<"Cong chuc co thu nhap thap nhat la: "<<endl;
	for(int i=0; i<n; i++){
		if(a[i].thunhap() == min) a[i].xuat();
	}	
}
void sapXep(CongChuc *a, int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if( strcmp( a[i].HoTen, a[j].HoTen)>0 ) 
				swap(a[i], a[j]);
	cout<<"Sau sap xep: "<<endl;
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
}

int main()
{
	int n;
	cout<<"Nhap vao so cong chuc: "; cin>>n;
	CongChuc *a = new CongChuc[n];
	for(int i=0; i<n; i++){
		cout<<"Cong chuc thu "<<i+1<<endl;
		a[i].nhap();
	}
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
	minThuNhap(a,n);
	sapXep(a,n);
}
