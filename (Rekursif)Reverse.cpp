//Dwifi Pariza Ibrahim
//G1A021092

#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

char rubah[1000];
void rubah_kalimat( ){
  int i,n,p;
    cout<<"KATA SETELAH DIBALIK : ";
    n=strlen(rubah);
  for(i=n-1; i>=0; i--)
{
  cout<<rubah[i];
}
}
  int main(){
    cout<<"MASUKKAN KATA     : "; 
    cin>>rubah;
    rubah_kalimat();
}
