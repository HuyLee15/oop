#include<bits/stdc++.h>

using namespace std;


class ABC
{
	public:
		virtual void nhap()
		{
		}
		virtual void xuat()
		{
		}
};

class Hinh:public ABC
{
protected:
	int MS, VI;
public:
	virtual void nhap();
	virtual void xuat();
};
void Hinh::nhap()
{
	cout<<"Mau sac: "; cin>>MS;
	cout<<"Vien: "; cin>>VI;
}
void Hinh::xuat()
{
	cout<<setw(10)<<MS<<setw(10)<<VI;
}

class HCN : public Hinh
{
	float D, R;
public:
	void nhap();
	void xuat();
};

void HCN::nhap()
{
	Hinh::nhap();
	cout<<"Chieu dai: "; cin>>D;
	cout<<"Chieu rong: "; cin>>R;
}

void HCN::xuat()
{
	Hinh::xuat();
	cout<<setw(10)<<D<<setw(10)<<R<<endl;
}



int main()
{
	Hinh x;
	HCN y;
	ABC *p;
	p = &y;
	p->nhap();
	p->xuat();
}
