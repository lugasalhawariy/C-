#include <iostream>

using namespace std;

int main()
{
    int a;
    int banyak;
    float data;
    float jumlah;
    float rata;

    a = 1;
    cout<<"Masukan banyak perulangan: ";cin>>banyak;
    cout<<endl;
    do{
        cout<<"Masukan data ke-"<<a<<" = ";cin>>data;
        a++;
        jumlah += data;
    }while(a <= banyak);

    rata = jumlah / banyak;
    cout<<endl;
    cout<<"Jumlah data: "<<jumlah<<endl;
    cout<<"Rata-rata  : "<<rata;

    return 0;
}
