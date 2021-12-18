#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

main()
{
    system("27"); // Ini kan untuk memarnai tulisan & background, kok ga bisa yah? apa salah tempat?
    char kode;
    long int harga_total; //gimana caranya biar ga ada eksponen?
    double kue, jm_kue, kopi, jm_kopi, susu, jm_susu;
    int jumlah_pesan;
    harga_total=jm_kue+jm_kopi+jm_susu;
    kue=10000;  kopi=3000;  susu=3000;
    cout<<"  Nama-nama makanan"<<endl;
    cout<<"==================================="<<endl;
    cout<<"A . Kue berlapis"<<endl;
    cout<<"B . KOPI"<<endl;
    cout<<"C . Susu"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Masukan kode [A-C]  : ";
    cin>>kode;
    cout<<"Jumlah yang dipesan : ";
    cin>>jumlah_pesan;

        if(jumlah_pesan>=10)
            printf("\n\nKamu mendapat bonus 20%\n");
        else
            printf("\nSampai 10x kau mendapat diskon 20%\n"); //kok ga tertulis diskon?

    switch(kode) //Biasa dipake untuk pilihan-pilihan
        {
        case 'A' :
        case 'a' :
            cout<<"\nPembuatan 15 menit untuk Kue berlapis"<<endl;
            cout<<"Harga : Rp. "<<kue;
            break;
        case 'B' :
        case 'b' :
            cout<<"5 menit untuk pembuatan KOPI"<<endl;
            cout<<"Harga : Rp. "<<kopi;
            break;
        case 'C' :
        case 'c' :
            cout<<"5 menit untuk pembuatan SUSU"<<endl;
            cout<<"Harga : Rp. "<<susu;
            break;
        default :
            cout<<"Anda salah memasukkan kode";
            break;
            getch();
        }
        cout<<"\n====================================\n";
        cout<<"Jumlah kue yang dipesan  : ";
        cin>>jm_kue;
        cout<<endl;
        cout<<"Jumlah Kopi yang dipesan : ";
        cin>>jm_kopi;
        cout<<endl;
        cout<<"Jumlah Susu yang dipesan : ";
        cin>>jm_susu;
        cout<<endl;
        cout<<"Total semua yang harus dibayar adalah Rp. "<<harga_total;//Output-nya tidak sesuai harapan
        return 0;
}
