#include<bits/stdc++.h>

using namespace std;

class PTB2
{
	float a;
	float b;
	float c;
public:
	void nhap();
	void xuat();
	PTB2 operator+(PTB2 B);
	PTB2 operator-(PTB2 B);	
	PTB2 operator-();
	float operator--();
};
void PTB2::nhap()
{
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<"Nhap c: "; cin>>c;
}
void PTB2::xuat()
{
	cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;
}
PTB2 PTB2::operator+(PTB2 B)
{
	PTB2 C;
	C.a = a + B.a;
	C.b = b + B.b;
	C.c = c + B.c;
	return C;
}
PTB2 PTB2::operator-(PTB2 B)
{
	PTB2 C;
	C.a = a - B.a;
	C.b = b - B.b;
	C.c = c - B.c;
	return C;
}
PTB2 PTB2::operator-()
{
	a=-a;
	b=-b;
	c=-c;
	return *this;
}

float PTB2::operator--()
{
	return a+b+c;
}

int main()
{
	PTB2 A, B;
	A.nhap();
	B.nhap();
	PTB2 C = A + B;
	PTB2 D = A - B;
	A.xuat();
	B.xuat();
	C.xuat();
	D.xuat();
	D = -D;
	D.xuat();
	
	cout<<"Tong he so: "<<--D;
}
