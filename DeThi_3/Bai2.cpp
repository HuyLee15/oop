#include <bits/stdc++.h>
using namespace std;

class Vector
{
	float x,y;
public:
	Vector();
	Vector(float a, float b);
	Vector operator+(Vector B);
	Vector operator-(Vector B);
	friend istream& operator>>(istream& a, Vector &b);
	friend ostream& operator<<(ostream& a, Vector b);
};
Vector::Vector()
{
	x=0; y=0;
}
Vector::Vector(float a, float b)
{
	x=a; y=b;
}
Vector Vector::operator+(Vector B)
{
	Vector C;
	C.x = x + B.x;
	C.y = y + B.y;
	return C;
}
Vector Vector::operator-(Vector B)
{
	Vector C;
	C.x = x - B.x;
	C.y = y - B.y;
	return C;
}
istream& operator>>(istream& a, Vector &b)
{
	cout<<"x = "; a>>b.x;
	cout<<"y = "; a>>b.y;
	return a;
}
ostream& operator<<(ostream& a, Vector b)
{
	a<<"\t"<<b.x<<"\t"<<b.y<<endl;
	return a;
}
int main()
{
	Vector A,B;
	cin>>A;
	cout<<A;
	cin>>B; 
	cout<<B;
	cout<<"A+B = "<<A+B;
	cout<<"A-B = "<<A-B;
}
