#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
using namespace std;

main()
{
struct dtmhs
{
char nim[5];
char nama[15];
};

struct dtnil
{
float nil1;
float nil2;
};

struct
{
struct dtmhs mhs;
struct dtnil nil;
} nilai;

system("cls");

//-> masukan data
cout<<"masukan NIM = "; cin>>nilai.mhs.nim;
cout<<"masukan Nama = "; cin>>nilai.mhs.nama;
cout<<"masukan Nilai UTS = "; cin>>nilai.nil.nil1;
cout<<"masukan Nilai UAS = "; cin>>nilai.nil.nil2;
cout<<endl;

//-> menampilkan hasil masukan
cout<<"NIM = "<<nilai.mhs.nim<<endl;
cout<<"Nama = "<<nilai.mhs.nama<<endl;
cout<<"Nilai UTS = "<<nilai.nil.nil1<<endl;
cout<<"Nilai UAS = "<<nilai.nil.nil2<<endl;
cout<<endl;

getch();
return(0);
}
