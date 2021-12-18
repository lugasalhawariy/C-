#include <iostream>
#define maks 1000
using namespace std;

class sorting
{
private:
    int n;
    int data[maks];

public:
    void tukar(int a, int b)
    {
        int tempat;

        tempat = data[a];
        data[a] = data[b];
        data[b] = tempat;
    }
    void tampil()
    {
        cout << "[ ";
        for(int i=0; i<n; i++)
        {
            cout << data[i] << " ";
        }
        cout << " ]" << endl;
    }
    void utama()
    {
        cout << "Masukan banyak array: ";cin>>n;
        cout << endl;
        for(int i=0; i<n; i++)
        {
            cout << "Masukan nilai ke-"<<i<<" : ";cin>>data[i];
        }
        cout << endl;
        for(int i=0; i<n; i++)
        {
            for(int j=n; j>i; j--)
            {
                if(data[j] < data[j-1]) tukar(j,j-1);
            }
            tampil();
        }
    }
};

main()
{
    sorting obj;

    obj.utama();
}
