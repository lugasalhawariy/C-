#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int n;

    cout<<"Masukan banyak: ";cin>>n;

    do{
        i+=2;
        cout<<i<<" adalah Bilangan genap"<<endl;
    }while(i<n);

    return 0;
}
