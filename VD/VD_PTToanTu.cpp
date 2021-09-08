#include<bits/stdc++.h>

using namespace std;

class HCN
{
	float D;
	float R;
public: 
	void nhap();
	void xuat();
	HCN operator+(HCN Q); 	

};

void HCN::nhap()
{
	cout<<"Nhap chieu dai: "; cin>>D;
	cout<<"Nhap chieu rong: "; cin>>R;
}
void HCN::xuat()
{
	cout<<"Chieu dai: "<<D<<endl;
	cout<<"Chieu rong: "<<R<<endl;
}
HCN HCN::operator+(HCN Q)
{
	HCN K;
	K.D = this->D + Q.D;
	K.R = this->R + Q.R;
	return K;
}

int main()
{
	HCN P, Q;
	P.nhap();
	Q.nhap();
	HCN K = P+Q;
	K.xuat();
}
