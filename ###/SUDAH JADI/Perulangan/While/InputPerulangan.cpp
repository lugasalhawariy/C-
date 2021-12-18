#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int banyak;
    int data;
    int a;
    float rata;
    float jumlah=0;

    cout<<"Masukan banyak perulangan: ";cin>>banyak;
    cout<<endl;
    a = 1;
    while(a <= banyak){
        cout<<"Data ke-"<<a<<" = ";cin>>data;
        jumlah += data;
        a++;
    }
    cout<<endl<<endl;
    cout<<"Jumlah semua data: "<<jumlah;
    cout<<endl;
    rata = jumlah / banyak;
    cout<<"Rata-rata nilai  : "<<rata;

    getch();
}
