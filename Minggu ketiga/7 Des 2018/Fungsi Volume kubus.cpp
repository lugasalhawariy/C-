#include <iostream>

using namespace std;

int persegi(int panjang, int lebar, int tinggi){
    return panjang*lebar*tinggi;
}

main()
{
    int p,l,t;

    cout<<"Masukan panjang: ";cin>>p;
    cout<<"Masukan lebar  : ";cin>>l;
    cout<<"Masukan tinggi : ";cin>>t;

    cout<<endl;

    cout<<persegi(p,l,t);
}
