#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

main()
{
kembali:
    int hari;
    string lanjut;
    cout<<"Masukan kode hari [1-7]: ";cin>>hari;

    if(hari == 1){
        cout<<"Minggu";
    }
    else if(hari == 2){
        cout<<"Senin";
    }
    else if(hari == 3){
        cout<<"Selasa";
    }
    else if(hari == 4){
        cout<<"Rabu";
    }
    else if(hari == 5){
        cout<<"Kamis";
    }
    else if(hari == 6){
        cout<<"Jumat";
    }
    else if(hari == 7){
        cout<<"Sabtu";
    }
    else{
        cout<<"Anda salah memasukan kode."<<endl;
        cout<<"Silahkan ketik lanjut untuk mengulang: ";cin>>lanjut;

        if(lanjut == "lanjut" || lanjut == "LANJUT"){
            system("cls");
            goto kembali;
        }
        else
            cout<<"SELESAI. . .";
    }
}
