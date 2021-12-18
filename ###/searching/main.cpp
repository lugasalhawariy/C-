#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

main()
{
    kembali:
    //deklarasi jumlah array
    int n;
    int Angka_cari;
    string awal;
    bool bil = false;
    //input jumlah array yang diinginkan
    cout << "Masukan jumlah data: ";cin>>n;
    //deklarasi array
    int data[n];
    //input data dari masing-masing array menggunakan perulangan
    for(int i=0; i<n; i++){
        cout << "Data ke-"<< i << " : ";cin>>data[i];
    }
    //kosongkan semua tampilan
    system("cls");
    //tampilkan data secara vertikal / baris
    cout << "Seluruh Data: ";
    for(int i=0; i<n; i++){
        cout<<data[i]<<" ";
    }
    cout << endl << endl;

    cout << "Masukan angka yang dicari: ";cin>>Angka_cari;
    for(int i=0; i<n; i++)
    {
        if(data[i] == Angka_cari){
            bil = true;
        }
    }
    system("cls");
    if(bil == true){
        cout << "Data ditemukan"<<endl;
    }
    else{
        cout << "Data tidak ditemukan"<<endl;
    }

    cout << "Kembali?[ketik 'yes' or 'no']: ";cin>>awal;
    if(awal == "yes"){
        system("cls");
        goto kembali;
    }
    else if(awal == "no"){
        system("cls");
        cout << "PROGRAM TELAH BERHENTI";
    }
    else
    {
        system("cls");
        cout << "KODE YANG ANDA MASUKAN SALAH\nPROGRAM TELAH BERHENTI SECARA PAKSA";
    }
}
