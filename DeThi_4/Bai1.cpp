#include<bits/stdc++.h>
using namespace std;

class Vector
{
	int n;
	float *a;
public:
	Vector();
	Vector(int n, float *a);
	~Vector();
	friend istream& operator>>(istream& x, Vector &y);
	friend ostream& operator<<(ostream& x, Vector y);
};

Vector::Vector()
{
	n = 0;
	a = NULL;
}
	
Vector::Vector(int n, float *a){
   this->n = n;
   this->a = new float[n];
   for(int i=0; i<n; i++){
     	this->a[i] = a[i];
   }
}
istream& operator>>(istream& x, Vector &y)
{
	cout<<"Nhap n: "; x>>y.n;
	y.a= new float[y.n];
	for(int i=0; i<y.n; i++){
		cout<<"a["<<i<<"] = ";
		x>>y.a[i];
	}
	return x;
}

ostream& operator<<(ostream& x, Vector y)
{
	x<<"n = "<<y.n<<endl;
	for(int i=0; i<y.n; i++){
		x<<"\t"<<y.a[i];
	}
	return x;
}
Vector::~Vector()
{
	n=0;
	delete[] a;
}

int main()
{

}
