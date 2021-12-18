#include <iostream>
//#include <string>
using namespace std;

main()
{
    string TebakNama;
    string nama_rahasia[3];
    nama_rahasia[0] = "Lugas";
    nama_rahasia[1] = "lugas";
    nama_rahasia[2] = "LUGAS";

    while(true){

        cout<<"\nTebak nama: ";cin>>TebakNama;
        if(TebakNama == nama_rahasia[0] || TebakNama == nama_rahasia[1] || TebakNama == nama_rahasia[2])
        {
            cout<<endl;
            cout<<"Tebakan anda benar !!!";
            break;
        }
        cout<<endl;
        cout<<"Tebakan anda salah !!!\n";
    }
}
