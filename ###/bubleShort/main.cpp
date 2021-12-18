#include <iostream>
#define maks 1000
using namespace std;
int n;
int data[maks];

void tukar(int a, int b)
{
    int tempat;

    tempat = data[a];
    data[a] = data[b];
    data[b] = tempat;
}
void tampil()
{
    for(int i=0; i<n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

main()
{
    cout << "Masukan banyak array: ";cin>>n;
    cout << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Masukan nilai ke-"<<i+1<<" : ";cin>>data[i];
    }

    tampil();
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            if(data[j] > data[j-1]){tukar(j, j-1);}
        }
        tampil();
    }
}
