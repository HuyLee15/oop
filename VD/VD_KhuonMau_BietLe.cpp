#include<bits/stdc++.h>

using namespace std;
template <class T> class MANG
{
	int n;
	T *a;
	public:
		void nhap();
		void xuat();
};
template <class T> void MANG<T>::nhap()
{
	cout<<"n = "; cin>>n;
	a = new T[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}

template <class T> void MANG<T>::xuat()
{
	for(int i=0; i<n; i++){
		cout<<"\t"<<a[i];
	}
}


int main()
{
	MANG<int> x;
	x.nhap();
	x.xuat();
	

}
