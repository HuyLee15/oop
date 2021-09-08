#include <bits/stdc++.h>

using namespace std;


struct NgaySinh 
{
	int Ngay;
	int Thang;
	int Nam;
};

class Person 
{
protected:
	char HoTen[50];
	NgaySinh ns;
	char QueQuan[100];
};

class VanDongVien: public Person
{
protected:
	char BoMon[30];
	float ThuNhap;
};

class CauThu: public VanDongVien
{
	char CLB[100];
	char ViTri[100];
public:
	void nhap();
	void xuat();
	friend void inDanhSach(CauThu *a, int n);
};

void CauThu::nhap()
{
	cout<<"Ho Ten: "; fflush(stdin); gets(HoTen);
	cout<<"Ngay sinh: "<<endl;
	cout<<"\tNgay: "; cin>>ns.Ngay;
	cout<<"\tThang: "; cin>>ns.Thang;
	cout<<"\tNam: "; cin>>ns.Nam;
	cout<<"Que quan: "; fflush(stdin); gets(QueQuan);
	cout<<"Bo Mon: "; fflush(stdin); gets(BoMon);
	cout<<"Thu nhap: "; cin>>ThuNhap;
	cout<<"CLB: "; fflush(stdin); gets(CLB);
	cout<<"Vi tri: "; fflush(stdin); gets(ViTri);
}
void CauThu::xuat()
{
	cout<<setw(20)<<HoTen<<setw(20)<<ns.Ngay<<"-"<<ns.Thang<<"-"<<ns.Nam<<
	setw(20)<<QueQuan<<setw(20)<<BoMon<<setw(20)<<ThuNhap<<setw(20)<<CLB<<setw(20)<<ViTri<<endl;
}

void inDanhSach(CauThu *a, int n)
{
	float max = a[0].ThuNhap; 
	for(int i=0; i<n; i++){
		if( strcmp(a[i].CLB, "T&T")==0 ){
			a[i].xuat();
		}
		if(a[i].ThuNhap>max) max = a[i].ThuNhap;
	}
	cout<<"Nguoi co thu nhap cao nhat la: "<<endl;
	for(int i=0; i<n; i++){
		if( strcmp(a[i].CLB, "T&T")==0 && a[i].ThuNhap == max){
			a[i].xuat();
		}
	}
}

int main()
{
	int n;
	cout<<"Nhap Vao So Cau thu: ";
	cin>>n;
	CauThu *a = new CauThu[n];
	for(int i=0; i<n; i++){
		cout<<"Cau Thu Thu "<<i+1<<": "<<endl;
		a[i].nhap();
	}
	cout<<endl<<endl;
	cout<<"Danh sach cau thu: "<<endl;
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
	cout<<"\nDanh sach cau thu trong clb T&T la: "<<endl;
	inDanhSach(a,n);
}
