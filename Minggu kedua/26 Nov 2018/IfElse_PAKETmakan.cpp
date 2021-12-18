#include <iostream>
using namespace std;

main()
{
    cout<<"\t--- MENU PAKET ---\n";
    cout<<"\n1. Paket A = Ayam + nasi";
    cout<<"\n2. Paket B = 2 Telur + nasi";
    cout<<"\n3. Paket C = Telur + Nasi goreng";
    int paket;
    cout<<"\n\nMasukan pilihan anda [1-3]: ";cin>>paket;

    if(paket == 1)
    {
        cout<<"Harga Rp.15000";
    }
    else if(paket == 2)
    {
        cout<<"Harga Rp.14000";
    }
    else if(paket == 3)
    {
        cout<<"Harga Rp.16000";
    }
    else
        cout<<"Salah memasukan pilihan";
}
