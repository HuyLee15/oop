#include<bits/stdc++.h>

using namespace std;

class TG{
	private:
		char HOTEN[30];
		char MATG[20];
	public:
		void nhap();
		void xuat();
};
void TG::nhap()
{
	cout<<"Ho ten: "; fflush(stdin); gets(HOTEN);
	cout<<"Ma TG: "; fflush(stdin); gets(MATG);
}
void TG::xuat()
{
	cout<<setw(20)<<HOTEN<<setw(20)<<MATG<<endl;
}

class SACH{
	private:
		char MAS[20];
		char TENS[30];
		TG x;
	public:
		void nhap();
		void xuat();
};
void SACH::nhap()
{
	cout<<"Ma sach: "; fflush(stdin); gets(MAS);
	cout<<"Ten sach: "; fflush(stdin); gets(TENS);
	x.nhap();
}
void SACH::xuat()
{
	cout<<setw(10)<<MAS<<setw(20)<<TENS;
	x.xuat();
}
int main()
{
	int n; 
	cout<<"Nhap so luong sach: "; cin>>n;
	SACH *a = new SACH[n];
	for(int i=0; i<n; i++){
		a[i].nhap();
		cout<<endl;
	}
}
