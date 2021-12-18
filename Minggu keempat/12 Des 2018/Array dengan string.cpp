#include <iostream>

using namespace std;

main()
{
    char stars[8][80] = {"Justin","Harry","Cassy","Olive","Samyang","Jhonny","Whendy","Luszy"};

    int d(0);
    cout<<endl<<"Masukan angka antara 1 dan 8 : ";cin>>d;

    if(d>=1 && d<=8) //mengecek input
        {cout<<endl<<"Nama lain kamu adalah: "<<stars[d-1];}
    else
        {cout<<endl<<"Sorry, you haven't got a lucky star."<<endl;}
}
