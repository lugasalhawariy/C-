#include <iostream>
using namespace std;

main()
{
    string username;
    string password;

    login:
    cout<<"Masukan username: ";cin>>username;
    cout<<"Masukan Password: ";cin>>password;

    if(username == "lugas" && password == username + "123"){
        cout<<"\nAnda berhasil login.\n";
    }
    else{
        cout<<"\nUsername atau password anda salah. . .\nSilahkan coba lagi\n";
        cout<<"\nTekan tombol acak"<<endl;
        system("pause");
        system("cls");
        goto login;
    }
}
