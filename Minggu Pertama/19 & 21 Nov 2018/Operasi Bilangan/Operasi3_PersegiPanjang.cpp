#include <iostream>

using namespace std;

int main()
{
    int panjang,lebar, tinggi;
    int hasil;

    cout<<"Masukan nilai panjang : ";cin>>panjang;
    cout<<"Masukan nilai lebar   : ";cin>>lebar;
    cout<<"Masukan nilai tinggi  : ";cin>>tinggi;
    hasil = panjang * lebar * tinggi;

    cout<<endl<<"Hasil persegi panjang : "<<hasil;
    return 0;
}
