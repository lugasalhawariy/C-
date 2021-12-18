#include <iostream>
#include <conio.h>

using namespace std;

struct buku{
    char judul[15];
    int tahun_terbit;
    int harga;
};

int main()
{
    buku book;
        book.judul = "Dermawan";
        book.tahun_terbit = 1998;
        book.harga = 90000;

        cout<<"\nJudul buku \t: "<<book.judul;
        cout<<"\nTahun terbit \t: "<<book.tahun_terbit;
        cout<<"\nHarga \t\t: "<<book.harga;
        getch();
}
