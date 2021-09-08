#include<bits/stdc++.h>

using namespace std;
class PHIEUNHAP;
class HANG{
	char MAH[20];
	char TENH[20];
	float DG;
	int SL;
public:
	void nhap();
	void xuat();
	friend void sum(PHIEUNHAP a);
	friend void sapXep(PHIEUNHAP a);
};
void HANG::nhap()
{
	cout<<"Ma hang: "; fflush(stdin); gets(MAH);
	cout<<"Ten hang: "; fflush(stdin); gets(TENH);
	cout<<"Don gia: "; cin>>DG;
	cout<<"So luong: "; cin>>SL;
}
void HANG::xuat()
{
	cout<<setw(10)<<MAH<<setw(20)<<TENH<<setw(10)<<DG<<setw(10)<<SL<<endl;
}

class PHIEUNHAP{
	char MAP[20];
	char NGAY[20];
	HANG *x;
	int n;
public:
	void nhap();
	void xuat();
	friend void sum(PHIEUNHAP a);
	friend void sapXep(PHIEUNHAP a);
};
void PHIEUNHAP::nhap()
{
	cout<<"Ma phieu: "; fflush(stdin); gets(MAP);
	cout<<"Ngay nhap phieu: "; fflush(stdin); gets(NGAY);
	cout<<"n = "; cin>>n;
	x = new HANG[n];
	for(int i=0; i<n; i++)
		x[i].nhap();
}
void PHIEUNHAP::xuat()
{
	cout<<"Ma phieu: "<<MAP<<endl;
	cout<<"Ngay nhap phieu: "<<NGAY<<endl;
	for(int i=0; i<n; i++){
		x[i].xuat();
	}		
}
void sum(PHIEUNHAP a)
{
	float sum=0;
	for(int i=0; i<a.n; i++){
		sum+=a.x[i].DG*a.x[i].SL;
	}
	cout<<"Tong tien = "<<sum<<endl;
}
void sapXep(PHIEUNHAP a)
{
	for(int i=0; i<a.n-1; i++)
		for(int j=i+1; j<a.n; j++)
			if(a.x[i].DG>a.x[j].DG) swap(a.x[i], a.x[j]);
	a.xuat();
}
int main()
{
	PHIEUNHAP a;
	a.nhap();
	a.xuat();
	sum(a);
	sapXep(a);
}
