#include <bits/stdc++.h>
using namespace std;

class ThoiGian
{
	int Gio, Phut, Giay;
public:
	ThoiGian();
	ThoiGian(int x, int y, int z);
	ThoiGian operator-(ThoiGian B);
	friend istream& operator>>(istream& x, ThoiGian &y);
	friend ostream& operator<<(ostream& x, ThoiGian y);
};

ThoiGian::ThoiGian()
{
	Gio = 0;
	Phut = 0;
	Giay = 0;
}
ThoiGian::ThoiGian(int x, int y, int z)
{
	Gio = x;
	Phut = y;
	Giay = z;
}
ThoiGian ThoiGian::operator-(ThoiGian B)
{
	ThoiGian C;
	C.Gio = Gio - B.Gio;
	C.Phut = Phut - B.Phut;
	C.Giay = Giay - B.Giay;
	return C;
}
istream& operator>>(istream& x, ThoiGian &y)
{
	cout<<"Gio = "; x>>y.Gio;
	cout<<"Phut = "; x>>y.Phut;
	cout<<"Giay = "; x>>y.Giay;
	return x;
}
ostream& operator<<(ostream& x, ThoiGian y)
{
	x<<"\t"<<y.Gio<<":"<<y.Phut<<":"<<y.Giay<<endl;
	return x;
}

int main()
{
	ThoiGian A,B;
	cin>>A;
	cout<<A;
	cin>>B;
	cout<<B;
	ThoiGian C=A-B;
	cout<<"A - B = C = "<<C;
}
