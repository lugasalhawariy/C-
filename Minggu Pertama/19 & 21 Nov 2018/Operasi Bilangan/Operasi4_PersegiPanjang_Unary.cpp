#include <iostream>

using namespace std;

int main()
{
    //persegi panjang Unary
    int panjang,lebar, tinggi;
    int hasil=0;

    cout<<"Masukan nilai panjang : ";cin>>panjang;
    cout<<"Masukan nilai lebar   : ";cin>>lebar;
    cout<<"Masukan nilai tinggi  : ";cin>>tinggi;
    hasil *= panjang;
    hasil *= lebar;
    hasil *= tinggi;

    cout<<endl<<"Hasil persegi panjang : "<<hasil;
    return 0;
}
