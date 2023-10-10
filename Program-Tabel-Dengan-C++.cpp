#include <iostream>
#include <iomanip>
using namespace std; 
 int main(){
 	int NIM[10],b,c;
 	string nama[10], tgl[10];
 	cout<<"MASUKAN JUMLAH DATA YANG INGIN DI INPUT :";
 	cin>>b;
	for(int i=0;i<b;i++){
	cout<<"MASUKAN NAMA MAHASISWA : ";
 	getline(cin>> ws, nama[i]);
 	cout<<"MASUKAN NIM MAHASISWA : ";
 	cin>>NIM[i]; 
 	cout<<"MASUKAN TANGGAL LAHIR MAHASISWA  : ";
 	cin>>tgl[i];
 }
 cout<<"=============================================================="<<endl;
 cout<<"|      NAMA      |   NOMOR POKOK MAHASISWA  |  TANGGAL LAHIR |"<<endl;
 cout<<"=============================================================="<<endl;
 for(int i=0;i<b;i++){
cout<<"|"<<setw(15)<<nama[i]<<" |"<<setw(25)<<NIM[i]<<" |"<<setw(15)<<tgl[i]<<" |"<<endl;
 cout<<"=============================================================="<<endl;
 }
}