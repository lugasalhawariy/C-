#include <iostream>
#include <conio.h>
//#include <iomanip>
using namespace std;

int tambah(int n1, int n2) // FUNGSI PENJUMLAHAN
    {
        int thasil;
        thasil=n1+n2;
        return thasil;
    }
int kurang(int n1, int n2) //FUNGSI PENGURANGAN
    {
        int phasil;
        phasil=n1-n2;
        return phasil;
    }
float kali(float n1, float n2) //FUNGSI PERKALIAN
    {
        float khasil;
        khasil=n1*n2;
        return khasil;
    }
float bagi(float n1, float n2) //FUNGSI PEMBAGIAN
    {
        float bhasil;
        bhasil=n1/n2;
        return bhasil;
    }
int mod(int n1, int n2) //MODULUS TIDAK BISA PAKAI FLOAT, WHY?
    {
        float mhasil;
        mhasil=n1%n2;
        return mhasil;
    }

main()
{
    int n1,n2;
    cout<<"Masukan nilai 1 : ";cin>>n1;
    cout<<endl;
    cout<<"Masukan nilai 2 : ";cin>>n2;

    //MENAMPILAKN FUNGSI YANG SUDAH DIBUAT DI ATAS
    //cout<<setiosflags(ios::fixed);
    cout<<"Hasil Pertambahan adalah = "<<tambah(n1,n2);cout<<endl; //namafungsi(inputan)
    cout<<"Hasil Pengurangan adalah = "<<kurang(n1,n2);cout<<endl;
    cout<<"Hasil Perkalian adalah   = "<<kali(n1,n2);cout<<endl;
    cout<<"Hasil Pembagian adalah   = "<<bagi(n1,n2);cout<<endl;
    cout<<"Hasil Modulus adalah     = "<<mod(n1,n2);cout<<endl;

    getch();
}
