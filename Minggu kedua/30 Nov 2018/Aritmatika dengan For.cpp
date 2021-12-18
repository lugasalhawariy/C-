#include <iostream>
using namespace std;

main()
{
    int n;
    int hasil=0;
    cout<<"Masukan banyak baris: ";cin>>n;

    cout<<endl;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==i){

                cout<<j;
            }
            else{

                cout<<j<<" + ";
            }
            if(i >= 2)
            {
                hasil = i+(j+j-1);
            }
        }

        for(int j=n; j>=i; j--)
        {
                cout<<"    ";
        }
        cout<<" = ";
        if(i == 1)
            cout<<i;
        else
            cout<<hasil;
        cout<<endl;
    }
}
