#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Mencari kelipatan 5: ";cin>>x;

    if(x%5 == 0)
        cout<<x<<" Kelipatan 5";
    else
        cout<<x<<" Bukan kelipatan 5";

    return 0;
}
