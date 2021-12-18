#include <iostream>
using namespace std;

int KelilingBelahketupat(int sisi){
    return 4*sisi;
}

main()
{
    int sisi;
    cout<<"Masukan sisi belah ketupat : ";cin>>sisi;
    cout<<"Keliling belah ketupat adalah = "<<KelilingBelahketupat(sisi);
}
