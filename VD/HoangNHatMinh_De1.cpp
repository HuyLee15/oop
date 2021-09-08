#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Person;
struct Date
{
    int D,M,Y;
    friend class Person;
};
class Person
{
    protected:
        char hoten[50];
        Date NS;
        char quequan[100];
};
class VDV: public Person
{
    protected:
        char bomon[30];
        float thunhap;
};
class CauThu: public VDV
{
    private:
        char CLB[30];
        char ViTri[30];
    public:
        void nhap();
        void xuat();
};
void CauThu::nhap()
{
    cout<<"\nHo ten: ";fflush(stdin);
    gets(hoten);
    cout<<"\nNgay thang: "<<endl;
    cout<<"\tNgay: ";cin>>NS.D;
    cout<<"\tThang: ";cin>>NS.M;
    cout<<"\nNam: ";cin>>NS.Y;
    cout<<"\nQue Quan: ";fflush(stdin);
    gets(quequan);
    cout<<"\nBo Mon: ";fflush(stdin);
    gets(bomon);
    cout<<"\nThu Nhap: ";fflush(stdin);
    cin>>thunhap;
    cout<<"\nCLB: ";fflush(stdin);
    gets(CLB);
    cout<<"\nVi Tri: ";fflush(stdin);
    gets(ViTri);
}
void CauThu::xuat()
{
    cout<<setw(20)<<hoten<<setw(20)<<NS.D<<setw(20)<<NS.M<<setw(20)<<NS.Y<<setw(20)<<setw(20)<<quequan<<setw(20)<<bomon<<setw(20)<<thunhap<<setw(20)<<CLB<<setw(20)<<ViTri;
}
int main()
{
    CauThu a;
    a.nhap();
    a.xuat();
}
