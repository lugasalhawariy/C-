#include <iostream>

using namespace std;

int main()
{
    int n, data, jumlah=0;
    float rerata;
    cout<<"Masukkan nilai: ";cin>>n;
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"Data ke-"<<i<<" = ";cin>>data;
        jumlah+=data;
    }
    rerata = jumlah / 3.0;

    cout<<"\nJumlah    : "<<jumlah;
    cout<<"\nRata-rata : "<<rerata;
}
