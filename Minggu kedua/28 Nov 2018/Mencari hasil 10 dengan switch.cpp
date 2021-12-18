#include <iostream>
using namespace std;

main()
{
    int nomor1, nomor2, hasil;

    cout<<"Masukan No 1: ";cin>>nomor1;
    cout<<"Masukan No 2: ";cin>>nomor2;

    hasil = nomor1+nomor2;

    switch(hasil == 10)
    {
    case true:
        cout<<"\nHasil pertambahan adalah 10";
        break;
    case false:
        cout<<"\nHasil bukan sepuluh";
    }
}
