#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int n;

    cout<<"Masukan banyak: ";cin>>n;

    do{
        i+=1;
        cout<<i<<" adalah Bilangan ganjil"<<endl;
    }while(i<n);

    return 0;
}
