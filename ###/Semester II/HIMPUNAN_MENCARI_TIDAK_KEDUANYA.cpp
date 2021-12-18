#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
    kembali:

    int suka_menulis; //input
    int suka_membaca; //input
    int jumlah_siswa;
    int suka_keduanya;
    int bukan_keduanya;

    cout<<"Berapa banyak jumlah siswa       ?";cin>>jumlah_siswa;
    cout<<"Berapa banyak yang suka menulis  ?";cin>>suka_menulis;
    cout<<"Berapa banyak yang suka membaca  ?";cin>>suka_membaca;
    cout<<"Berapa banyak yang suka keduanya ?";cin>>suka_keduanya;

        if(suka_keduanya > suka_membaca || suka_keduanya > suka_menulis)
        {
            cout<<"\nANDA TIDAK BISA MEMASUKAN INPUT MELEBIHI "<<suka_membaca;
            cout<<"DAN"<<suka_menulis;
            system("cls");
            goto kembali;
        }

    system("cls");

    //proses
    suka_membaca -= suka_keduanya;
    suka_menulis -= suka_keduanya;
    bukan_keduanya = jumlah_siswa - (suka_membaca + suka_menulis + suka_keduanya);

    cout<<"Jumlah siswa   : "<<jumlah_siswa<<endl;
    cout<<"Suka menulis   : "<<suka_menulis<<endl;
    cout<<"Suka membaca   : "<<suka_membaca<<endl;
    cout<<"Suka keduanya  : "<<suka_keduanya<<endl;
    cout<<"Tidak keduanya : "<<bukan_keduanya<<endl;
}
