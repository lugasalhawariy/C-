#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <time.h>
#include <conio.h>
using namespace std;

class hangman{
public:
     void proses()
    {
       cout << "Masukan nama : ";getline(cin, nama);
       cout << "Masukan level: ";cin>>level;

       switch(level)
       {
           case 1:
               cout << "Hallo, "<<nama;
               soalMudah();
               break;
           //case 2: menengah();
           //case 3: sulit();
           default: cout << "Salah memasukkan nilai";
       }

    }
    void soalMudah()
    {

        int angka = 5;
        for(int i=0; i<5; i++)
        {
            //random(batas);
            acak = random(5);
            nomorSoal[acak];

            if(acak == 0)
                {
                    jawaban = "nol";
                    cout << "\nSoal ke-1: "<<endl;
                    cout << "\nJawaban  : ";cin>>menjawab;

                    if(menjawab == jawaban){
                        skor = skor + 10;
                        cout << "benar!";
                        }
                    else{
                        system("cls");
                        cout << "salah!";
                        }
                }
            else if(acak == 1)
                {
                    jawaban = "satu";
                    cout << "\nSoal ke-2: "<<endl;
                    cout << "\nJawaban  : ";cin>>menjawab;

                    if(menjawab == jawaban){
                        skor = skor + 10;
                        cout << "benar!";
                        }
                    else{
                        system("cls");
                        cout << "salah!";
                        }
                }
                else if(acak == 2)
                {
                    jawaban = "satu";
                    cout << "\nSoal ke-2: "<<endl;
                    cout << "\nJawaban  : ";cin>>menjawab;

                    if(menjawab == jawaban){
                        skor = skor + 10;
                        cout << "benar!";
                        }
                    else{
                        system("cls");
                        cout << "salah!";
                        }
                }
            else{cout <<endl<<endl; cout << acak;cout << " Belum dibuat\n\n";}
        }

    }
private:
    string jawaban;
    int skor;
    string menjawab;
    int nomorSoal[5];
    string nama;
    int level;
    int acak;
    randomize();
};



main()
{
    hangman obj;
    obj.proses();
}
