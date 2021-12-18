#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>
#include <string>
#define maks 1000
using namespace std;

class matdis
{
private:
    int n, r;
public:
    //proses enkripsi
    void enkripsi()
    {
        int kunci;
        char chiper[maks];
        int tambah;

        //input
        cin.ignore();
        cout<<endl;
        cout<<"Masukan kata yang di inginkan: ";cin.getline(chiper,sizeof(chiper));
        cout<<"Masukan kunci yang digunakan : ";cin>>kunci;
        cout<<endl<<endl;

        //kata sebelum diproses
        cout << "Kata sebelum di-Enkripsi   : ";
        for(int i=0; i<strlen(chiper); i++){
            cout<<chiper[i];
        }

        //proses
        for(int i=0; i<strlen(chiper); i++){


            chiper[i]=((chiper[i]+kunci) % 122);
            //modulus 122 : Karena huruf di ASCII ada dari nomor 65 s/d 90 huruf besar
            //dan 97 s/d 122 adalah huruf kecil
            tambah = chiper[i];

            if(tambah < 65){

                while(tambah < 65)
                {
                    //proses ini ada, karena nomor ASCII kurang dari 65 ada karakter
                    //yang tidak bisa ditampilkan.
                    tambah++;
                }
                tambah += chiper[i];
            }
            chiper[i] = tambah;
        }

    //baris kosong untuk memisahkan sebelum dan sesudah
    cout << endl << endl;


        //kata sesudah ada proses enkripsi
        cout << "Kata sesudah di-Enkripsi   : ";
        for(int i=0; i<strlen(chiper); i++){
            cout<<chiper[i];
        }
    }
    //proses deskripsi
    void deskripsi()
    {
        int kunci;
        char plan[maks];
        int tambah;

        //input
        cin.ignore();
        cout<<"Masukan kata Enkripsi: ";cin.getline(plan,sizeof(plan));
        cout<<"Masukan kunci        : ";cin>>kunci;
        cout<<endl;

        //kata sebelum diproses
        cout << "Kata sebelum di-Deskripsi: ";
        for(int i=0; i<strlen(plan); i++){
            cout<<plan[i];
        }

        //proses
        for(int i=0; i<strlen(plan); i++){


            plan[i]=((plan[i]-kunci) % 122);
            //modulus 122 : Karena huruf di ASCII ada dari nomor 65 s/d 90 huruf besar
            //dan 97 s/d 122 adalah huruf kecil

            if(plan[i] < 65){

                tambah = 65 - plan[i];
                plan[i] = 122 - tambah;
            }

        }

    //baris kosong untuk memisahkan sebelum dan sesudah
    cout << endl << endl;


        //kata sesudah ada proses enkripsi
        cout << "Kata sesudah di-Deskripsi: ";
        for(int i=0; i<strlen(plan); i++){
            cout<<plan[i];
        }
    }
    //proses kombinasi
    void kombinasi()
    {
        int kombinasi;
        cout << endl << endl;
        cout << " Program Menghitung Kombinasi(nCr)" << endl << endl;
        cout << " Masukkan Nilai n   : "; cin >> n;
        cout << " Masukkan Nilai r   : "; cin >> r;
        kombinasi = faktorial(n)/(faktorial(r)*faktorial(n-r));
        cout << " Kombinasinya adalah: "<< kombinasi;
    }
    //proses permutasi
    void permutasi()
    {
        int permutasi;
        cout << endl << endl;
        cout << " Program Menghitung Kombinasi(nCr)" << endl << endl;
        cout << " Masukkan Nilai n   : "; cin >> n;
        cout << " Masukkan Nilai r   : "; cin >> r;
        permutasi = faktorial(n)/faktorial(n-r);
        cout << " Kombinasinya adalah: "<< permutasi;
    }

    //code FAKTORIAL untuk kmbinasi dan permutasi
    int faktorial (int n)
                //metode rekursif
                {
                    int fak;
                        if (n<=1)
                        {
                            fak=1;
                        }
                        else
                        {
                            fak=n*faktorial(n-1);
                        }
                    return (fak);
                }

    //logika untuk kembali
    void kembali()
    {
                    string balik;
                    cout << "\n\nKembali [Y/N] : ";cin >> balik;
                    if(balik == "Y" || balik == "y"){
                        system("cls");
                        menu();
                    }
                    else if(balik == "N" || balik == "n"){
                        system("cls");
                        cout << "PROGRAM TELAH BERAKHIR" <<endl<<endl;
                    }
                    else
                    {
                        system("cls");
                        cout << "KODE YANG ANDA MASUKKAN TIDAK SESUAI"<<endl;
                        cout << "PROGRAM TELAH BERAKHIR SECARA PAKSA"<<endl<<endl;
                    }
    }
    //menampilkan menu
    void menu()
    {
        int pilih;
        cout << "\tPROGRAM POSTEST"<<endl;
        cout << "______________________________"<<endl;
        cout << "1. Enkripsi \n";
        cout << "2. Deskripsi \n";
        cout << "3. Kombinasi \n";
        cout << "4. Permutasi \n";
        cout << "______________________________"<<endl;
        cout << "Masukan pilihan anda : ";cin>>pilih;

        switch(pilih)
        {
            case 1:
                enkripsi();
                kembali();
                break;
            case 2:
                deskripsi();
                kembali();
                break;
            case 3:
                kombinasi();
                kembali();
                break;
            case 4:
                permutasi();
                kembali();
                break;
        }
    }
};

main()
{
    matdis MenampilkanMenu;

    MenampilkanMenu.menu();
}
