//Dwifi Parizza ibrahim
//G1A021092
#include <iostream>
using namespace std;

long int pangkatrekursif(int x, int y);

int main(){
	
	int x,y;
	
	cout<<"FUNGSI REKURSIF UNTUK MENGHITUNG PANGKAT"<<endl;
	cout<<"Metode DFI_092"<<endl;
	cout<<"Masukan Nilai X(angka) = ";
	cin>>x;
	
	cout<<"Masukan Nilai Y(pangkat) = ";
	cin>>y;
	cout<<endl;
	cout<<x<<" Dipangkatkan "<<y<<" = "<<pangkatrekursif(x,y)<<endl;
}


long int pangkatrekursif(int x, int y){
	 if (y==0)
		 return 1 ;
		 else 
                 return x * pangkatrekursif(x,y-1);
} 
