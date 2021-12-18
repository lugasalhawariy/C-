#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
using namespace std;

main()
{
int i;
struct
{
string genre;
string judul;
int harga;
} film[2];

system("cls");

film[0].genre = "Horror";
film[0].judul = "Pengabdi Wakanda";
film[0].harga = 50000;

film[1].genre = "Aksi";
film[1].judul = "Mati tertusuk sate";
film[1].harga = 70000;

cout<<endl;
cout<<"data FILM"<<endl;
for(i=0; i<2; i++)
{
cout<<"FILM Ke - "<<i+1<<endl;
cout<<"Genre   = "<<film[i].genre<<endl;
cout<<"Judul   = "<<film[i].judul<<endl;
cout<<"Harga   = "<<film[i].harga<<endl;
cout<<endl;
}

getch();
}
