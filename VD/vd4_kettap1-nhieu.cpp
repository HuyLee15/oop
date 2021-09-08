#include<bits/stdc++.h>

using namespace std;

class HANG{
	char MAH[30];
	char TENH[30];
	float DG;
	int SL;
public:
	void nhap();
	void xuat();
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
	cout<<setw(20)<<MAH<<setw(20)<<TENH<<setw(20)<<DG<<setw(20)<<SL<<endl;
}

class HOADON{
	private:
		char MAHD[10];
		char NGAY[20];
		HANG *x;
		int n;
	public:
		void nhap();
		void xuat();
};
void HOADON::nhap()
{
	cout<<"Ma HD: "; fflush(stdin); gets(MAHD);
	cout<<"Ngay lap: "; fflush(stdin); gets(NGAY);
	cout<<"n = "; cin>>n;
	x = new HANG[n];
	for(int i=0; i<n; i++){
		x[i].nhap();
	}
}
void HOADON::xuat()
{
	cout<<"Ma HD: "<<MAHD<<endl;
	cout<<"Ngay: "<<NGAY<<endl;
	for(int i=0; i<n; i++)
		x[i].xuat();
}
int main()
{
	HOADON a;
	a.nhap();
	a.xuat();
}
