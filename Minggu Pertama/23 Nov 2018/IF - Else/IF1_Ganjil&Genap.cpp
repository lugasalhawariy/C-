#include <iostream>

using namespace std;

main()
{
    int input;
    cout<<"Masukkan nilai: ";cin>>input;
    cout<<endl;

    if(input%2 == 0)
        cout<<input<<" Adalah bilangan genap";
    else
        cout<<input<<" Adalah bilangan ganjil";
}
