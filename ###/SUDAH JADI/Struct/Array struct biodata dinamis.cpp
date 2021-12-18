#include <iostream>
using namespace std;

int main()
{
 //deklarasi struct dengan nama mahasiswa
 struct mahasiswa
 {
 //isi dari tipe data bentukan mahasiswa
 int nim;
 char nama[20];
 char gender[10];
 };

//inisialisasi mhs ke tipe data mahasiswa dengan arraynya
mahasiswa mhs[2];

//perulangan untuk menginputkan
 for (int i = 0; i<2; i++)
 {
 cout <<"NIM : ";
 cin>>mhs[i].nim;

 cout <<"Nama : ";
 cin>>mhs[i].nama;

 cout <<"Jenis Kelamin : ";
 cin>>mhs[i].gender;
 }

 //perulangan untuk menampilkan
 for (int i=0; i<2; i++)
 {
  cout<<"========================== \n";
  cout<<"NIM : "<<mhs[i].nim<<endl;
  cout<<"Nama : "<<mhs[i].nama<<endl;
  cout<<"Jenis Kelamin : "<<mhs[i].gender<<endl;
 }

 return 0;
}
