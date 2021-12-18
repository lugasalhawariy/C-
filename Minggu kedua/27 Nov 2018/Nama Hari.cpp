#include <iostream>
using namespace std;

main()
{
    int hari;

    cout<<"Masukan kode hari: ";cin>>hari;
    switch(hari)
    {
    case 1:
        cout<<"Hari senin";
        break;
    case 2:
        cout<<"Hari selasa";
        break;
    case 3:
        cout<<"Hari Rabu";
        break;
    case 4:
        cout<<"Hari Kamis";
        break;
    case 5:
        cout<<"Hari Jumat";
        break;
    case 6:
        cout<<"Hari Sabtu";
        break;
    case 7:
        cout<<"Hari Minggu";
        break;
    default:
        cout<<"Anda salah masukan kode";
        break;
    }
}
