#include<bits/stdc++.h>

using namespace std;

class Phieu;

class NCC{
	char MaNCC[20];
	char TenNCC[30];
	char DC[30];
	char SDT[15];
	public:
		void nhap();
		void xuat();
};

void NCC::nhap()
{
	cout<<"Ma NCC: "; fflush(stdin); gets(MaNCC);
	cout<<"Ten NCC: "; fflush(stdin); gets(TenNCC);
	cout<<"Dia chi: "; fflush(stdin); gets(DC);
	cout<<"SDT: "; cin>>SDT;
}
void NCC::xuat()
{
	cout<<"Ma NCC: "<<MaNCC<<endl;
	cout<<"Ten NCC: "<<TenNCC<<endl;
	cout<<"Dia Chi: "<<DC<<endl;
	cout<<"SDT: "<<SDT<<endl;
}

class Hang{
	char MaSP[20];
	char TenSP[20];
	int SL;
	float DG;
	public: 
		void nhap();
		void xuat();
		friend void ktra(Phieu a);
		friend class Phieu;
		friend void sapXep(Phieu a);
};
void Hang::nhap()
{
	cout<<"Ma San Pham: "; fflush(stdin); gets(MaSP);
	cout<<"Ten San Pham: "; fflush(stdin); gets(TenSP);
	cout<<"So luong: "; cin>>SL;
	cout<<"Don gia: "; cin>>DG;
}
void Hang::xuat()
{
	cout<<setw(20)<<MaSP<<setw(20)<<TenSP<<setw(20)<<SL<<setw(20)<<DG<<endl;
}

class Phieu{
	char MaPhieu[20];
	char NgayLap[20];
	NCC x;
	Hang *y;
	int n;
	public: 
		void nhap();
		void xuat();
		friend void ktra(Phieu a);
		friend void sapXep(Phieu a);
};
void Phieu::nhap()
{
	cout<<"Ma Phieu: "; fflush(stdin); gets(MaPhieu);
	cout<<"Ngay lap: "; fflush(stdin); gets(NgayLap);
	x.nhap();
	cout<<"Nhap vao so luong hang: "; cin>>n;
	y = new Hang[n];
	for(int i=0; i<n; i++){
		y[i].nhap();
	}
	cout<<endl;
}
void Phieu::xuat()
{
	cout<<"Ma Phieu: "<<MaPhieu<<endl;
	cout<<"Ngay Lap: "<<NgayLap<<endl;
	x.xuat();
	for(int i=0; i<n; i++){
		y[i].xuat();
	}
}
void ktra(Phieu a)
{
	int dem=0;
	for(int i=0; i<a.n; i++){
		if(a.y[i].SL < 80) dem++;
	}
	cout<<"Co "<<dem<<" san pham co so luong lon hon 80."<<endl;
}
void sapXep(Phieu a)
{
	for(int i=0; i<a.n-1; i++)
		for(int j=i+1; j<a.n; j++)
			if( a.y[i].DG> a.y[j].DG) swap(a.y[i], a.y[j]);
	cout<<"\nIn lai phieu ra man hinh: "; a.xuat();	
}

int main()
{
	Phieu a;
	a.nhap();
	a.xuat();
	ktra(a);
	sapXep(a);
}
