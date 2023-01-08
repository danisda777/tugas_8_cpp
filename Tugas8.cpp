#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Inputkan Nilai X : ";
	cin>>x;
	
	switch (x){
		case 10000 :
		cout<<"Tampilkan output sepuluh ribu rupiah";
		break;
		case 20000 :
		cout<<"Tampilkan output dua puluh ribu rupiah";
		break;
		case 30000 :
		cout<<"Tampilkan output tiga puluh ribu rupiah";
		break;
		case 40000 :
		cout<<"Tampilkan output empat puluh ribu rupiah";
		break;
		case 50000 :
		cout<<"Tampilkan output lima puluh ribu rupiah";
		break;
		default :
		cout<<"Tidak Terdaftar di program";
	}
}
