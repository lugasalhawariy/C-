#include <iostream>
using namespace std;

main()
{
    int n;
    int i;
    int j;
    cout<<"Masukan banyak: ";cin>>n;
    i = 1;
    while(i<=n)
    {
        j=n;
        while(j>=i)
        {
            cout<<" ";
            j--;
        }
        j=1;
        while(j<=i*2-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
