#include<bits/stdc++.h>

using namespace std;

class TG
{
	float a,b,c;
	public:
		void nhap();
		void xuat();
		TG operator+(TG Q);
		float operator++();
};
void TG::nhap()
{
	do{
		cout<<"Nhap a: "; cin>>a;
		cout<<"Nhap b: "; cin>>b;
		cout<<"Nhap c: "; cin>>c;
		if(a+b<=c || b+c<=a || a+c<=b)
			cout<<"Day khong phai la tam giac, vui long nhap lai!"<<endl;
	} while(a+b<=c || b+c<=a || a+c<=b);
}
void TG::xuat()
{
	cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;
}
TG TG::operator+(TG Q)
{
	TG K;
	K.a = a + Q.a;
	K.b = b + Q.b;
	K.c = c + Q.c;
	return K;
}
float TG::operator++()
{
	float p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
	TG P,Q;
	P.nhap();
	Q.nhap();
	TG K = P + Q;
	K.xuat();
	cout<<"Dien tich tam giac K = "<<++K;
}
