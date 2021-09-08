#include<bits/stdc++.h>

using namespace std;

class Hang
{
	char MaH[10];
	char TenH[20];
	float DG;
	int SL;
	int Nam;
public:
	Hang();
	Hang(char *a, char *b, float c, int d, int e);	
	friend  istream& operator>>(istream& x, Hang &y);
	friend  ostream& operator<<(ostream& x, Hang y);
	friend  void Ktra(Hang *a, int n);
	friend void sapXep(Hang *a, int n);
	friend void xoa(Hang *a, int &n);
	friend void xoaAll(Hang *a, int &n);
	void chen(Hang *a, int &n);
};

Hang::Hang()
{
	strcpy(MaH, "");
	strcpy(TenH, "");
	DG = 0;
	SL = 0; 
	Nam = 0;
}

Hang::Hang(char *a, char *b, float c, int d, int e)
{
	strcpy(MaH, a);
	strcpy(TenH, b);
	DG = c;
	SL = d;
	Nam = e;
}
 istream& operator>>(istream& x, Hang &y)
 {
 	cout<<"Ma hang: "; fflush(stdin); x.getline(y.MaH, 10);
 	cout<<"Ten hang: "; fflush(stdin); x.getline(y.TenH, 20);
 	cout<<"Don gia: "; x>>y.DG;
 	cout<<"So luong: "; x>>y.SL;
 	cout<<"Nam: "; x>>y.Nam;
 	return x;
 }
 ostream& operator<<(ostream& x, Hang y)
 {
 	x<<setw(10)<<y.MaH<<setw(10)<<y.TenH<<setw(10)<<y.DG<<setw(10)<<y.SL<<setw(10)<<y.Nam<<endl;
 	return x;
 }
 void Ktra(Hang *a, int n)
 {
 	int count=0;
 	for(int i=0; i<n; i++){
 		if(strcmp(a[i].TenH, "Iphone 12") == 0) count++;
	 }
	 if(count > 0) cout<<"Co mat hang Iphone 12 trong danh sach vua tao";
	 else cout<<"Khong co mat hang Iphone 12 trong danh sach vua tao";
 }
 
 void sapXep(Hang *a, int n)
 {
 	for(int i=0; i<n-1; i++)
 	for(int j=i+1; j<n; j++)
 		if( (a[i].DG + a[i].SL) > (a[j].DG + a[j].SL) ) swap(a[i], a[j]);
 }
 
 void xoa(Hang *a, int &n)
 {
 	for(int i=0; i<n; i++){
 		if(strcmp(a[i].MaH, "H005") == 0){
 			for(int j=i; j<n; j++)
 				a[j]=a[j+1];
 			n--;
 			i--;
		 }
	 }
	 a = (Hang*) realloc(a, n*sizeof(Hang));
	ofstream x("D:/HANGREMOVE.TXT", ios::out);
	for(int i=0; i<n; i++){
		x<<a[i];
	}
	x.close();
 }
 
 void xoaAll(Hang *a, int &n)
 {
 	for(int i=0; i<n; i++){
 		if(a[i].DG<12){
 			for(int j=i; j<n; j++)
 				a[j]=a[j+1];
 			n--;
 			i--;
		 }
	 }
	 a = (Hang*) realloc(a, n*sizeof(Hang));
	ofstream m("D:/HANGKONHO.TXT", ios::out);
	for(int i=0; i<n; i++){
		m<<a[i];
	}
	m.close();
 }
 
 void chen(Hang *a, int &n)
 {
 	int k;
 	cout<<"\nNhap vao vi tri chen: "; cin>>k;
	if(k>n) cout<<"Vi tri khong hop le, k phai nho hon hoac bang n";
	else if(k==n){
		n++;
		cin>>a[n];
	} 
	else if(k==0){
		n++;
		for(int i=1; i<n; i++)
			a[i]=a[i-1];
		cin>>a[0];
	}
	else{
		n++;
		for(int i=n; i>k; i--)
			a[i]=a[i-1];
		cin>>a[0];
	}
	a = (Hang*) realloc(a, n*sizeof(Hang));
	cout<<"Danh sach vua chen la: "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i];
 }
 
 int main()
 {
 	int n;
 	cout<<"nhap vao so luong mat hang: "; cin>>n;
 	Hang *a = new Hang[n];
 	for(int i=0; i<n; i++){
 		cout<<"Mat hang thu "<<i+1<<endl;
 		cin>>a[i];
	}
	ofstream f("D:/HANGNHAP.DAT.txt", ios::out);
	for(int i=0; i<n; i++){
		f<<a[i];
	}
	f.close();
	Ktra(a,n);
	sapXep(a,n);
	ofstream k("D:/HANGSORT.TXT", ios::out);
	for(int i=0; i<n; i++){
		k<<a[i];
	}
	k.close();
	xoa(a,n);
	xoaAll(a,n);
	chen(a,n);
 }
