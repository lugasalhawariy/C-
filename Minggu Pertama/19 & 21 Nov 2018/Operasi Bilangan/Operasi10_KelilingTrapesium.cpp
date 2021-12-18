#include <iostream>

using namespace std;

int main()
{
    int kelTra;
    int atas, sisi, bawah;
    cout<<"Masukan nilai atas: ";cin>>atas;
    cout<<"Masukan nilai sisi: ";cin>>sisi;
    cout<<"Masukan nilai bawah: ";cin>>bawah;

    kelTra = atas + sisi + sisi + bawah;
    cout<<endl<<endl<<kelTra;
    return 0;
}
