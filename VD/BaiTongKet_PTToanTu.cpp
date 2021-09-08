#include<bits/stdc++.h>

using namespace std;

class MANG
{
	int n;
	int *a;
	public:
		MANG operator+(MANG Y);
		MANG operator!();
		friend istream& operator>>(istream& x, MANG &y);
		friend ostream& operator<<(ostream& x, MANG y);
};

MANG MANG::operator+(MANG Y)
{
	
	MANG Z;
	if(n=Y.n){
		Z.a = new int[Y.n];
	
		for(int i = 0 ; i < n ; i++){
			Z.a[i] = this->a[i] + Y.a[i];
		}
	}
	else {
		Z.n=0;
		Z.a=NULL;
	}
	return Z;
}

MANG MANG::operator!()
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i] > a[j]) swap(a[i], a[j]);
	return *this;
	
}

istream& operator>>(istream& x, MANG &y)
{
	cout<<"Nhap vao so phan tu cua mang: "; x>>y.n;
	y.a = new int[y.n];
	for(int i=0; i<y.n; i++){
		cout<<"Phan tu thu "<<i+1<<": ";
		x>>y.a[i];
	}
	return x;
}
ostream& operator<<(ostream& x, MANG y)
{
	for(int i=0; i<y.n; i++){
		cout<<"\t"; 
		x<<y.a[i];
	}
	return x;
}

int main()
{
	MANG A, B;
	cin>>A >> B;
	cout<<A<<endl<<B<<endl;
	
	cout << !A<<endl;
	cout<<A+B;
}
