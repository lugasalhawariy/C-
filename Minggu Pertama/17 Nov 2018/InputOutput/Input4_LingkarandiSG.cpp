#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define PHI 3.14
using namespace std;
main()
{
    float alas, tinggi, r; //r = jari-jari
    float se = 1/(float)2; //se = setengah

    float luas_s,luas_l,total;

    cout<<"Nilai alas segitiga       : ";cin>>alas;
    cout<<"Nilai Tinggi segitiga     : ";cin>>tinggi;
    cout<<"Nilai Jari-jari Lingkaran : ";cin>>r;

    //luas segitiga
    luas_s=se;
    luas_s*=alas;
    luas_s*=tinggi;

    //luas lingkaran
    luas_l=PHI;
    luas_l*=r;
    luas_l*=r;

    //Proses
    system("cls");
    luas_s-=luas_l; //CARANYA DENGAN MENGURANGI LUAS LINGKARAN DARI LUAR SEGITIGA

    cout<<"\n\nLuas lingkaran di dalam segitiga (Unary) : "<<luas_s;
    getch();
}
