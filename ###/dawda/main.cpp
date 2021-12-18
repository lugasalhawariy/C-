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
    int x, y;

public:
    //proses enkripsi
    void enkripsi()
    {
        int kunci;
        char chiper[maks];
        int tambah;

        //input
        cin.ignore();
        cout<<"Masukan kata yang di inginkan: ";cin.getline(chiper,sizeof(chiper));
        cout<<"Masukan kunci yang digunakan : ";cin>>kunci;
        cout<<endl;

        //kata sebelum diproses
        cout << "Kata sebelum di-Enkripsi: ";
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
        cout << "Kata sesudah di-Enkripsi: ";
        for(int i=0; i<strlen(chiper); i++){
            cout<<chiper[i];
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
            case 1: enkripsi(); break;
        }
    }
};

main()
{
    matdis MenampilkanMenu;

    MenampilkanMenu.menu();
}
