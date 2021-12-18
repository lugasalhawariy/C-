#include <iostream>
using namespace std;

main()
{
    int nomor1, nomor2, hasil;

    cout<<"Masukan No 1: ";cin>>nomor1;
    cout<<"Masukan No 2: ";cin>>nomor2;

    hasil = nomor1+nomor2;

    switch(hasil%2 == 0)
    {
    case true:
        cout<<"\nGenap";
        break;
    case false:
        cout<<"\nGanjil";
    }
}
