#include <iostream>

using namespace std;

int main()
{
    int buku;

    cout<<"Berapa harga buku ENGLISH FOR INSTITUTIONAL COURSE (EFIC) yang diterbitkan UAD? ";
    cout<<"\nJawab: ";cin>>buku;

    switch(buku == 35000)
    {
    case true:
        cout<<"Anda benar!!!";
        break;
    default:
        cout<<"Anda salah!!!";
        break;
    }
    return 0;
}
