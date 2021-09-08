#include<bits/stdc++.h>

using namespace std;
 
class NSX{
	char MANSX[20];
	char TENNSX[20];
	char DC[20];
public:
	void xuat();
	void nhap();
};
void NSX::nhap()
{
	cout<<"Ma nsx: "; fflush(stdin); gets(MANSX);
	cout<<"Ten nsx: "; fflush(stdin); gets(TENNSX);
	cout<<"Dia chi: "; fflush(stdin); gets(DC);
}
void NSX::xuat()
{
	cout<<setw(20)<<MANSX<<setw(20)<<TENNSX<<setw(20)<<DC<<endl;
}

class HANG{
	char MAH[30];
	char TENH[30];
	NSX x;
public:
	void nhap();
	void xuat();
};
void HANG::nhap()
{
	cout<<"Ma hang: "; fflush(stdin); gets(MAH);
	cout<<"Ten hang: "; fflush(stdin); gets(TENH);
	x.nhap();
}
void HANG::xuat()
{
	cout<<setw(10)<<MAH<<setw(20)<<TENH;
	x.xuat();
}
int main()
{
	int n;
	cout<<"Nhap so luong mat hang: "; cin>>n;
	HANG *a=new HANG[n];
	for(int i=0; i<n; i++)
		a[i].nhap();
	cout<<setw(10)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(20)<<"Ma nsx"<<setw(20)<<"Ten nsx"<<setw(20)<<"Dia chi"<<endl;
	for(int i=0; i<n; i++)
		a[i].xuat();
}
