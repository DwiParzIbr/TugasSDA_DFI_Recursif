//Dwifi Parizza Ibrahim
//G1A021092

#include<iostream>
using namespace std;
int zero(int angka)
{
static int hitung=0;
    if(angka>0)
    {
        if(angka%10==0)
        hitung++;
        zero(angka/10);
    }
    return hitung;
}

int main()
{
    int n;
    cout<<"Menghitung Jumlah Angka Nol"<<endl;
    cout<<"Metode DFI_092"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Masukkan angka :";
    cin>>n;
    cout<<"==========================="<<endl;
    cout<<"Banyaknya angka nol : "<<zero(n);
}
