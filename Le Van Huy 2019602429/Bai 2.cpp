#include <bits/stdc++.h>

using namespace std;

class PTB2
{
	float a,b,c;
public:
	friend istream& operator>>(istream& x, PTB2 &y);
	friend ostream& operator<<(ostream& x, PTB2 y);
	PTB2 operator-(PTB2 B);
	float operator--();
};

istream& operator>>(istream& x, PTB2 &y)
{
	cout<<"a = "; x>>y.a;
	cout<<"b = "; x>>y.b;
	cout<<"c = "; x>>y.c;
	return x;
}
ostream& operator<<(ostream& x, PTB2 y)
{
	x<<y.a<<"x"<<char(253)<<" + "<<y.b<<"x"<<" + "<<y.c<<" = 0"<<endl;
	return x;
}

PTB2 PTB2::operator-(PTB2 B)
{
	PTB2 C;
	C.a = a - B.a;
	C.b = b - B.b;
	C.c = c - B.c;
	return C;
}
float PTB2::operator--()
{
	return (a+b+c)/3;
}

int main()
{
	PTB2 P,Q;
	
	cin>>P;
	cout<<"P = "<<P;
	
	cin>>Q;
	cout<<"Q = "<<Q;
	
	PTB2 K = P-Q;
	cout<<"K = P - Q = "<<K;
	cout<<"Trung binh cong cua a,b,c cua K la: "<<--K;
	return 0;
}

