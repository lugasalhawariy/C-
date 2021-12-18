#include <iostream>

using namespace std;

int main()
{
    int a;

    cout<<"====================================="<<endl;
    cout<<"              PILIH POLA             "<<endl;
    cout<<"====================================="<<endl;
    cout<<"1. Pola satu perulangan"<<endl;
    cout<<"2. Pola dua perulangan"<<endl;
    cout<<"3. Pola tiga perulangan"<<endl;
    cout<<"====================================="<<endl;
    cout<<"Masukan kode: ";cin>>a;

    switch(a)
    {
    case 1:
        for(int i=1; i<=10; i++)
        {
            for(int j=1; j<=i; j++)
                cout<<"*";
            cout<<endl;
        }
        break;
    case 2:
        for(int i=1; i<=10; i++)
        {
            for(int j=10; j>=i; j--)
                cout<<"*";
            cout<<endl;
        }
        break;
    case 3:
        for(int i=1; i<=10; i++)
        {
            for(int j=1; j<=i; j++)
                cout<<"*";
            cout<<endl;
        }
        for(int i=2; i<=10; i++)
        {
            for(int j=10; j>=i; j--)
                cout<<"*";
            cout<<endl;
        }
        break;
    }
}
