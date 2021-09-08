#include <bits/stdc++.h>

using namespace std;

class Diem
{
	float a,b,c;
public:
	Diem();
	Diem(float x, float y, float z);
	Diem operator+(Diem B);
	friend istream& operator>>(istream& x, Diem &y);
	friend ostream& operator<<(ostream& x, Diem y);
};

Diem::Diem()
{
	a=0;
	b=0;
	c=0;
}
Diem::Diem(float x, float y, float z)
{
	a=x;
	b=y;
	c=z;
}
Diem Diem::operator+(Diem B)
{
	Diem C;
	C.a = a+B.a;
	C.b = b+B.b;
	C.c = c+B.c;
	return C;
}
istream& operator>>(istream& x, Diem &y)
{
	cout<<"a = "; x>>y.a;
	cout<<"b = "; x>>y.b;
	cout<<"c = "; x>>y.c;
	return x;
}
ostream& operator<<(ostream& x, Diem y)
{
	x<<"\t"<<y.a<<"\t"<<y.b<<"\t"<<y.c<<endl;
	return x;
}
int main()
{
	Diem A;
	cin>>A;
	cout<<A;
	
	Diem B;
	cin>>B;
	cout<<B;
	
	Diem C=A+B;
	cout<<C;
}
