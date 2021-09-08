//12h53'
#include <bits/stdc++.h>
using namespace std;

class Nha
{
protected:
	float DienTich;
	int NamXD;
	double KinhPhiXD;
};

class NhaCaoTang: public Nha
{
	int SoTang;
	int SoPhong;
public: 
	void nhap();
	void xuat();
	friend void sapXep(NhaCaoTang *a, int n);
	friend void inDanhSach(NhaCaoTang *a, int n);
};

void NhaCaoTang::nhap()
{
	cout<<"Dien tich: "; cin>>DienTich;
	cout<<"Nam xay dung: "; cin>>NamXD;
	cout<<"Kinh phi xay dung: "; cin>>KinhPhiXD;
	cout<<"So tang: "; cin>>SoTang;
	cout<<"So phong: "; cin>>SoPhong;
	cout<<endl;
}

void NhaCaoTang::xuat()
{
	cout<<setw(10)<<DienTich<<setw(10)<<NamXD<<setw(10)<<KinhPhiXD<<setw(10)<<SoTang<<setw(10)<<SoPhong<<endl;
}

void sapXep(NhaCaoTang *a, int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i].DienTich<a[j].DienTich)
				swap(a[i], a[j]);
}
void inDanhSach(NhaCaoTang *a, int n)
{
	for(int i=0; i<n; i++)
		if(a[i].SoPhong>5) a[i].xuat();
}

int main()
{
	int n;
	cout<<"Nhap vao so nha cao tang: "; cin>>n;
	NhaCaoTang *a = new NhaCaoTang[n];
	for(int i=0; i<n; i++){
		cout<<"Nha cao tang thu "<<i+1<<": "<<endl;
		a[i].nhap();
	}
	sapXep(a,n);
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
	cout<<"in danh sach: "<<endl;
	inDanhSach(a,n);
}
