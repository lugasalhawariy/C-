#include <iostream>
#include <string>
using namespace std;

main()
{
    string kalimat;
    int jumlah = 0;
    int posisi = 0;

    cout<<"Masukan kalimat: ";getline(cin, kalimat);

    while(true)
    {
        posisi = kalimat.find(" ", posisi + 1);
        jumlah++;

        if(posisi < 0)
            break;

    }
    cout<<"Jumlah kata dalam kalimat adalah "<<jumlah;
}
