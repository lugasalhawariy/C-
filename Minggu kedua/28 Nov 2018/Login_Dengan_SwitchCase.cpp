#include <iostream>
using namespace std;

main()
{
    string password;
    cout<<"Masukan pasword: ";cin>>password;

    switch(password == "lugas")
    {
    case true:
        cout<<"Berhasil login";
        break;
    case false:
        cout<<"Silahkan coba lagi";
    }
}
