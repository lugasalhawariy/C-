#include <iostream>
using namespace std;

main()
{
    int n;
    int i;
    int j;
    int k;
    int l;
    cout<<"Masukan banyak: ";cin>>n;
    i = 1;
    while(i<=n)
    {
        j=n;
        while(j>=i)
        {
            cout<<"*";
            j--;
        }
        j=1;
        while(j<=i*2-1)
        {
            cout<<" ";
            j++;
        }
         j=n;
        while(j>=i)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    k = 1;
    while(k<=n)
    {
        l=1;
        while(l<=i)
        {
            cout<<"*";
            l++;
        }
        l=1;
        while(l<=i)
        {
            cout<<"*";
            l++;
        }
        cout<<endl;
        k++;
    }
}
