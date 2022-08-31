#include <iostream>

using namespace std;

int main()
{
	float p,l,t,r,tt,v;
	
	cout<<"PROJECT MENGHITUNG VOLUME BAK DAN TANDON"<<endl;
	cout<<"========================================"<<endl;
	cout<<"Masukkan panjang bak: ";
	cin>>p;
	cout<<"Masukkan lebar bak: ";
	cin>>l;
	cout<<"Masukkan tinggi bak: ";
	cin>>t;
	cout<<"Masukkan jari-jari tandon: ";
	cin>>r;
	cout<<"Masukkan tinggi tandon: ";
	cin>>tt;
	v = p*l*t + 3.14*r*r*tt;
	cout<<"Volume bak dan tandon adalah "<<v<<endl;
	
	return 0;
}
