#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main()
{
    struct DataMhs{
        char nim[5];
        char nama[15];
    };
    struct DataNilai{
        float nil1;
        float nil2;
    };
    struct{
        struct DataMhs mahasiswa;
        struct DataNilai nilai;
    }nilaiALL;

    //for(int i=0; i<3; i++)
    //{
        cout<<endl;
        cout<<"Masukan NIM        : ";cin>>nilaiALL.mahasiswa.nim;
        cout<<"Masukan nama       : ";cin>>nilaiALL.mahasiswa.nama;
        cout<<"Masukan nilai UK 1 : ";cin>>nilaiALL.nilai.nil1;
        cout<<"Masukan nilai UK 2 : ";cin>>nilaiALL.nilai.nil2;
    //}

    cout<<endl<<endl;

    //for(int i=0; i<3; i++)
    //{
        cout<<endl;
        cout<<"NIM        : "<<nilaiALL.mahasiswa.nim<<endl;
        cout<<"Nama       : "<<nilaiALL.mahasiswa.nama<<endl;
        cout<<"Nilai UK 1 : "<<nilaiALL.nilai.nil1<<endl;
        cout<<"Nilai UK 2 : "<<nilaiALL.nilai.nil2<<endl;
    //}

    getch();
}
