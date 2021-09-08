#include<bits/stdc++.h>

using namespace std;

class SV{
	char MASV[20];
	char HOTEN[30];
	int TUOI;
	friend class LOPHOC;
	friend void check(class LOPHOC a);
};

class LOPHOC{
	char MAL[20];
	char PHONG[20];
	SV *x;
	int n;
public: 
	void nhap();
	void xuat();
	friend void check(LOPHOC a);
	
};
void LOPHOC::nhap()
{
	cout<<"Ma lop: "; fflush(stdin); gets(MAL);
	cout<<"Phong hoc: "; fflush(stdin); gets(PHONG);
	cout<<"n = "; cin>>n;
	x= new SV[n];
	for(int i=0; i<n; i++){
		cout<<"Nhap sinh vien thu "<<i+1<<": "<<endl;
		cout<<"Ma sv: "; fflush(stdin); gets(x[i].MASV);
		cout<<"Ho ten: "; fflush(stdin); gets(x[i].HOTEN);
		cout<<"Tuoi: "; cin>>x[i].TUOI;
	}
}
void LOPHOC::xuat()
{
	cout<<"Ma lop: "<<MAL<<endl;
	cout<<"Phong: "<<PHONG<<endl;
	for(int i=0; i<n; i++)
		cout<<setw(10)<<x[i].MASV<<setw(20)<<x[i].HOTEN<<setw(10)<<x[i].TUOI<<endl;
}
void check(LOPHOC a)
{
	int count=0;
	for(int i=0; i<a.n; i++)
		if(strcmp(a.x[i].HOTEN,"NGUYEN VAN A")==0)
			count++;
	if(count==0)
		cout<<"Khong";
	else 
		cout<<"Co";
}
int main()
{
	LOPHOC a;
	a.nhap();
	a.xuat();
	check(a);
}
