#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <fstream>
#define SOAL_MAKS 3
#define MAX 1000
using namespace std;

//Deskripsi permainan hangman
/*
1. Mulai permainan
2. Masukkan nama
3. Masukkan level (buat 3 level tipe array diisi 5 string soal)
4. Bermain di level terpilih, muncul kata dengan unknown(string, '*')
5. Menebak! Memiliki 5 kesempatan
6. Jika salah maka "Game Over"
7. Jika benar maka skor akan ditambahkan, dan lanjut bermain lagi dengan soal acak
8. Keseluruhan data pemain tersimpan di file.txt dengan urut
9. Ada menu untuk menampilkan 10 pemain dengan skor tertinggi (pake metode sorting)
10. Selesai.

 |------------Bahan-bahan yang dibutuhkan untuk memasak-----------|

Variabel integer : max, min, kesempatan, kegagalan, nomor_pemain, acak_index,
Variabel String  : nama, menjawab, wadah_soal
Variabel Array   : mudah, sedang, sulit,

File .txt (Untuk menyimpan data pemain)

*/
class pemain
{
private:

    int n = 0;

    string nama, wadah_soal, menjawab;
    string penampung_array[4];

    int level, acak, kesempatan = 5, skor = 0, kesalahan = 0, JUMLAH_SOAL = 0;
    int maks, wadah_kesalahan = 0;
    bool isData = false, stop = false;
    int nilaiSkor[MAX];
    string daftarNama[MAX];
    int jumlahSalah[MAX];
    string jenisLevel[MAX];


    ofstream myFile;
    ifstream Eksport;


public:
    void menu(){
        int pilih;
        system("cls");
        cout << "1. Bermain lagi"<<endl;
        cout << "2. Player yang telah bermain"<<endl;

        cout << "Masukan pilihan: ";cin>>pilih;
        switch(pilih){
            case 1: system("cls"); bermain(); break;
            case 2: system("cls"); daftarpemain_berdasarWaktu(); break;
            default: cout << "salah memasukkan kode";
        }
    }

    void daftarpemain_berdasarWaktu(){

        int tambah = 0;

         //membuka file untuk menulis
                    Eksport.open("datapemain.txt");
                    //menulis file
                    while(!Eksport.eof()){

                            Eksport >> daftarNama[tambah];
                            Eksport >> nilaiSkor[tambah];
                            Eksport >> jumlahSalah[tambah];
                            Eksport >> jenisLevel[tambah];

                            cout << nilaiSkor[tambah] << endl;

                            tambah++;
                    }
                    //menutup file setelah menulis
                    //Eksport.close();
    }

    void bermain(){

/* agar random berganti-ganti subjek*/ srand(time(NULL)); //WAJIB PAKAI - KARENA OBJEK DARI ACAK HARUS BERUBAH (#include <time.h>)
        cin.ignore();
        cout << "Masukkan nama : ";getline(cin, nama);
        cout << "__________________________________________"<<endl;
        cout << "1. Mudah \n2. Sedang \n3. Sulit\n";
        cout << "__________________________________________"<<endl;
        cout << "Masukkan level: ";cin>>level;
        system("cls");

        //kondisi - pertama dari level
        if(level == 1){
        //buat soal
        string mudah[3] = {"satu", "dua", "tiga"};

        while( JUMLAH_SOAL < SOAL_MAKS || stop == true )
        //perulangan while jumlah soal
        {
            acak = rand() % 3;

            lanjutkan:

            wadah_soal = mudah[acak];

                //INDEX N = WADAH DARI SOAL
                if(n == 0){
                    penampung_array[0] = mudah[acak];
                }
                else if(n == 1){
                    penampung_array[1] = mudah[acak];
                }
                else if(n == 2){
                    penampung_array[3] = mudah[acak];
                }
                else{
                    cout << "N KELEBIHAN " << endl;
                }

            string unknown(wadah_soal.length(), '*');

            cout << "Soal "<<JUMLAH_SOAL+1<<"          : " << unknown;

            while(wadah_kesalahan < kesempatan || isData == true)
            //perulangan while kesempatan mencoba
            {
                cout << endl << "Jawaban         : ";cin>>menjawab;

                //kondisi - 1 dari perulangan while
                if(menjawab == wadah_soal)
                    {
                        skor += 20;
                        cout << "TRUE !!!" << endl;
                        kesalahan = 0;
                        isData = true;

                        if(isData == true){
                            stop = true;
                        }

                        break;
                    }
                //kondisi - 2 dari perulangan while
                else
                    {
                        wadah_kesalahan++;
                        string wadah_unknown = unknown;
                        //perulangan untuk mencari huruf yang diketahui
                        int j=0;
                        for(int i=0; i<wadah_soal.length(); i++)
                        {
                            if(menjawab.substr(i,j+1) == wadah_soal.substr(i,j+1))
                            {
                                wadah_unknown.replace(i, j+1, wadah_soal.substr(i,j+1));
                            }
                        }

                        cout << "Huruf diketahui : " << wadah_unknown << endl;
                        cout << "FALSE !!!" << endl;
                        kesalahan++;
                        //anaknya kondisi - 2 dari perulangan while
                        if(kesalahan >= kesempatan)
                        {
                            system("cls");
                            cout << endl << endl;
                            cout << "\t\t\t" << "|=== Game Over ===|";
                            cout << endl << endl;
                            isData = true;
                            break;
                        }
                    }


            } //akhir dari perulangan kesempatan mencoba


            //Logika agar tidak terjadi soal yang sama
            if(mudah[acak] == penampung_array[n]){
                while(mudah[acak] == penampung_array[0] || mudah[acak] == penampung_array[1] || mudah[acak] == penampung_array[3]){
                    srand(time(NULL));
                    acak = rand() % 3;
                }
                JUMLAH_SOAL++;
                n++;
                system("pause");
                system("cls");
                goto lanjutkan;

            }
            else
            {

                JUMLAH_SOAL++;
                n++;
                system("pause");
                system("cls");

            }

        } //akhir perulangan while jumlah soal

        system("cls");
        cout << "\n\n\n\n";
        cout << "\t\tNama\tSkor\tKesalahan"<<endl;
        cout << "\t\t==============================="<<endl;
        cout << "\t\t" << nama << "\t " << skor << "\t " << wadah_kesalahan << endl;
        cout << "\t\t==============================="<<endl<<endl;

                    //membuka file untuk menulis
                    myFile.open("datapemain.txt", ios::app);
                    //menulis file
                    myFile << nama << "\t" << skor << "\t" << wadah_kesalahan << "\tMudah" << endl;
                    //menutup file setelah menulis
                    myFile.close();
                    getch();
        }//akhir kondisi dari level 1
        //kondisi - pertama dari level
        if(level == 2){
        //buat soal
        string menengah[3] = {"kilometer","hektometer","centimeter"};

        while( JUMLAH_SOAL < SOAL_MAKS || stop == true )
        //perulangan while jumlah soal
        {
            acak = rand() % 3;

            lanjutkan2:

            wadah_soal = menengah[acak];

                //INDEX N = WADAH DARI SOAL
                if(n == 0){
                    penampung_array[0] = menengah[acak];
                }
                else if(n == 1){
                    penampung_array[1] = menengah[acak];
                }
                else if(n == 2){
                    penampung_array[3] = menengah[acak];
                }
                else{
                    cout << "N KELEBIHAN " << endl;
                }

            string unknown(wadah_soal.length(), '*');

            cout << "Soal "<<JUMLAH_SOAL+1<<"          : " << unknown;

            while(kesalahan < kesempatan || isData == true)
            //perulangan while kesempatan mencoba
            {
                cout << endl << "Jawaban         : ";cin>>menjawab;

                //kondisi - 1 dari perulangan while
                if(menjawab == wadah_soal)
                    {
                        skor += 20;
                        cout << "TRUE !!!" << endl;
                        kesalahan = 0;
                        isData = true;

                        break;
                    }
                //kondisi - 2 dari perulangan while
                else
                    {
                        wadah_kesalahan++;
                        string wadah_unknown = unknown;
                        //perulangan untuk mencari huruf yang diketahui
                        int j=0;
                        for(int i=0; i<wadah_soal.length(); i++)
                        {
                            if(menjawab.substr(i,j+1) == wadah_soal.substr(i,j+1))
                            {
                                wadah_unknown.replace(i, j+1, wadah_soal.substr(i,j+1));
                            }
                        }

                        cout << "Huruf diketahui : " << wadah_unknown << endl;
                        cout << "FALSE !!!" << endl;
                        kesalahan++;
                        //anaknya kondisi - 2 dari perulangan while
                        if(kesalahan >= kesempatan)
                        {
                            system("cls");
                            cout << endl << endl;
                            cout << "\t\t\t" << "|=== Game Over ===|";
                            cout << endl << endl;
                            isData = true;
                            break;
                        }
                    }


            } //akhir dari perulangan kesempatan mencoba


            //Logika agar tidak terjadi soal yang sama
            if(menengah[acak] == penampung_array[n]){
                while(menengah[acak] == penampung_array[0] || menengah[acak] == penampung_array[1] || menengah[acak] == penampung_array[3]){
                    srand(time(NULL));
                    acak = rand() % 3;
                }
                JUMLAH_SOAL++;
                n++;
                system("pause");
                system("cls");
                goto lanjutkan2;

            }
            else
            {

                JUMLAH_SOAL++;
                n++;
                system("pause");
                system("cls");

            }

        } //akhir perulangan while jumlah soal

        system("cls");
        cout << "\n\n\n\n";
        cout << "\t\tNama\tSkor\tKesalahan"<<endl;
        cout << "\t\t==============================="<<endl;
        cout << "\t\t" << nama << "\t " << skor << "\t " << wadah_kesalahan << endl;
        cout << "\t\t==============================="<<endl<<endl;

                    //membuka file untuk menulis
                    myFile.open("datapemain.txt", ios::app);
                    //menulis file
                    myFile << nama << "\t" << skor << "\t" << wadah_kesalahan << "\tMenengah" << endl;
                    //menutup file setelah menulis
                    myFile.close();
                    getch();
        }//akhir kondisi dari level 2
        if(level == 3){
        //buat soal
        string sulit[3] = {"kamudanakuend","komputerrusak","apaitu?"};

        while( JUMLAH_SOAL < SOAL_MAKS || stop == true )
        //perulangan while jumlah soal
        {
            acak = rand() % 3;

            lanjutkan3:

            wadah_soal = sulit[acak];

                //INDEX N = WADAH DARI SOAL
                if(n == 0){
                    penampung_array[0] = sulit[acak];
                }
                else if(n == 1){
                    penampung_array[1] = sulit[acak];
                }
                else if(n == 2){
                    penampung_array[3] = sulit[acak];
                }
                else{
                    cout << "N KELEBIHAN " << endl;
                }

            string unknown(wadah_soal.length(), '*');

            cout << "Soal "<<JUMLAH_SOAL+1<<"          : " << unknown;

            while(kesalahan < kesempatan || isData == true)
            //perulangan while kesempatan mencoba
            {
                cout << endl << "Jawaban         : ";cin>>menjawab;

                //kondisi - 1 dari perulangan while
                if(menjawab == wadah_soal)
                    {
                        skor += 20;
                        cout << "TRUE !!!" << endl;
                        kesalahan = 0;
                        isData = true;

                        break;
                    }
                //kondisi - 2 dari perulangan while
                else
                    {
                        wadah_kesalahan++;
                        string wadah_unknown = unknown;
                        //perulangan untuk mencari huruf yang diketahui
                        int j=0;
                        for(int i=0; i<wadah_soal.length(); i++)
                        {
                            if(menjawab.substr(i,j+1) == wadah_soal.substr(i,j+1))
                            {
                                wadah_unknown.replace(i, j+1, wadah_soal.substr(i,j+1));
                            }
                        }

                        cout << "Huruf diketahui : " << wadah_unknown << endl;
                        cout << "FALSE !!!" << endl;
                        kesalahan++;
                        //anaknya kondisi - 2 dari perulangan while
                        if(kesalahan >= kesempatan)
                        {
                            system("cls");
                            cout << endl << endl;
                            cout << "\t\t\t" << "|=== Game Over ===|";
                            cout << endl << endl;
                            isData = true;
                            break;
                        }
                    }


            } //akhir dari perulangan kesempatan mencoba


            //Logika agar tidak terjadi soal yang sama
            if(sulit[acak] == penampung_array[n]){
                while(sulit[acak] == penampung_array[0] || sulit[acak] == penampung_array[1] || sulit[acak] == penampung_array[3]){
                    srand(time(NULL));
                    acak = rand() % 3;
                }
                JUMLAH_SOAL++;
                n++;
                system("pause");
                system("cls");
                goto lanjutkan3;

            }
            else
            {

                JUMLAH_SOAL++;
                n++;
                system("pause");
                system("cls");

            }

        } //akhir perulangan while jumlah soal

        system("cls");
        cout << "\n\n\n\n";
        cout << "\t\tNama\tSkor\tKesalahan"<<endl;
        cout << "\t\t==============================="<<endl;
        cout << "\t\t" << nama << "\t " << skor << "\t " << wadah_kesalahan << endl;
        cout << "\t\t==============================="<<endl<<endl;

                    //membuka file untuk menulis
                    myFile.open("datapemain.txt", ios::app);
                    //menulis file
                    myFile << nama << "\t" << skor << "\t" << wadah_kesalahan << "\Sulit" << endl;
                    //menutup file setelah menulis
                    myFile.close();
                    getch();
        }//akhir kondisi dari level 3
    }
};

main()
{
    char pilih;
    kembali:

    pemain satu;
    satu.menu();

    cout << "Mau kembali [Y/N]? ";cin>>pilih;
    if(pilih == 'Y' || pilih == 'y'){
        goto kembali;
    }
    else if(pilih == 'N' || pilih == 'n'){
        system("cls");
        cout << "\n\n\n\n";
        cout << "\t\t----------------------------------"<<endl;
        cout << "\t\t PROGRAM TELAH BERHENTI SEMPURNA"<<endl;
        cout << "\t\t----------------------------------"<<endl;
        getch();
    }
    else{
        system("cls");
        cout << "\n\n\n\n";
        cout << "\t\t--------------------------------------"<<endl;
        cout << "\t\t PROGRAM TELAH BERHENTI SECARA PAKSA"<<endl;
        cout << "\t\t--------------------------------------"<<endl;
        getch();
    }
}
