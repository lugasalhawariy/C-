#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Mencari kelipatan 10 dan 7: ";cin>>a;

    if(a%10 == 0 && a%2 == 0)
        cout<<a<<" Kelipatan 10 dan 2";
    else if(a%2 == 0)
        cout<<a<<" Kelipatan 2";
    else if(a%10 == 0)
        cout<<a<<" Kelipatan 10";
    else
        cout<<a<<" Bukan kelipatan ";

    return 0;
}
