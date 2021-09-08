#include<bits/stdc++.h>

using namespace std;

class SV
{
	char MaSV[10];
	char HoTen[20];
	float Diem;
	public:
		friend istream& operator>>(istream& x, SV &y);
		friend ostream& operator<<(ostream& x, SV y);
};

istream& operator>>(istream& x, SV &y)
{
	cout<<"Ma SV: "; x.getline(y.MaSV, 10);
	cout<<"Ho ten: "; x.getline(y.HoTen, 20);
	cout<<"Diem: "; x>>y.Diem;
	return x;
}
ostream& operator<<(ostream& x, SV y)
{
	x<<setw(10)<<y.MaSV<<setw(20)<<y.HoTen<<setw(10)<<y.Diem<<endl;
	return x;
}

int main()
{
	SV a;
	cin>>a;
	ofstream f("D:/test.txt", ios::out); 
	f<<a;
	f.close();
}
