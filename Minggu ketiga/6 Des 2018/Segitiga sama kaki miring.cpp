#include <iostream>

using namespace std;

main()
{
    int i=1;
    int n;

    cout<<"Masukan banyak: ";cin>>n;

    do{
        int j=0;
        do{
            cout<<"*";
            j++;

        }while(j<i);
        cout<<endl;
        i++;
    }while(i<n);
    i = 2;
    do{
        int j=n;
        do{
            cout<<"*";
            j--;

        }while(j>i);
        cout<<endl;
        i++;
    }while(i<n);
}
