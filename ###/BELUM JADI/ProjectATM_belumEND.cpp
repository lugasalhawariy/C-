#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

//PROTOTYPE
void satuan(long a);
void terbilang (long b);
void garis(int n);

main()
{
    string user, password;
    int input;

    garis(43);
    cout<<"\n||\t\tPROGRAM ATM\t\t||\n";
    garis(43);

    cout<<"Username: ";cin>>user;
    cout<<"Password: ";cin>>password;

    if(user == "lugas" && password == "12345")
    {
        rekening(input);
    }

    //cin>>input;
    //terbilang(input);

}

//FUNGSI LOGIN
void string()
{

}

//FUNGSI KOLOM
void garis(int n)
{
    for(i=1; i<n; i++)
    {
        cout<<"=";
    }
}

//FUNGSI PILIHAN DARI REKENING
void rekening(int pil)
{
    garis(43);
    cout<<"1. Cek saldo"<<endl;
    cout<<"2. Tambah saldo"<<endl;
    cout<<"3. Transfer"<<endl;
    garis(43);
    cout<<"Masukkan pilihan: ";cin>>pil;

        if(pil == 1){
            CekSaldo(saldo);
        }

}

//FUNGSI CEK SALDO
void CekSaldo(long cek)
{
    cek = 1000000;
    cout<<cek<<endl<<terbilang(cek);
}

//FUNSGI SATUAN (1-11)
void satuan(long a)
{
    if (a==1){
    cout<<"Satu ";
    }
    else if (a==2){
    cout<<"Dua ";
    }
    else if (a==3){
    cout<<"Tiga ";
    }
    else if (a==4){
    cout<<"Empat ";
    }
    else if (a==5){
    cout<<"Lima ";
    }
    else if (a==6){
    cout<<"Enam ";
    }
    else if (a==7){
    cout<<"Tujuh ";
    }
    else if (a==8){
    cout<<"Delapan ";
    }
    else if (a==9){
    cout<<"Sembilan ";
    }
    else if (a==10){
    cout<<"Sepuluh ";
    }
    else if (a==11){
    cout<<"Sebelas ";
    }
}

    //FUNGSI LEBIH DARI 11 - UNLIMETED
    void terbilang (long b)
    {
        if (b<=11){
        satuan(b);
        }
        else if ((b>11) && (b<=19)){
        terbilang(b%10);
        cout<<"Belas ";
        }
        else if ((b>=20)&&(b<=99)){
        terbilang(b/10);
        cout<<"Puluh ";
        terbilang(b%10);
        }
        else if ((b>=100)&&(b<=199)){
        cout<<"Seratus ";
        terbilang(b%100);
        }
        else if ((b>=200)&&(b<=999)){
        terbilang(b/100);
        cout<<"Ratus ";
        terbilang(b%100);
        }
        else if ((b>=1000)&&(b<=1999)){
        cout<<"Seribu ";
        terbilang(b%1000);
        }
        else if ((b>=2000)&&(b<=9999)){
        terbilang(b/1000);
        cout<<"Ribu ";
        terbilang(b%1000);
        }
        else if ((b>=10000)&&(b<=99999)){
        terbilang(b/1000);
        cout<<"Ribu ";
        terbilang(b%1000);
        }
        else if ((b>=100000)&&(b<=999999)){
        terbilang(b/1000);
        cout<<"Ribu ";
        terbilang(b%1000);
        }
        else if ((b>=1000000)&&(b<=999999999)){
        terbilang(b/1000000);
        cout<<"Juta ";
        terbilang(b%1000000);
        }
        else if ((b>1000000000)){
        cout<<"Angka yang anda masukan banyak!";
        }
    }
