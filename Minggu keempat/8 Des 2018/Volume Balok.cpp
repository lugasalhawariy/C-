#include <iostream>
#include <math.h>
using namespace std;

void volBALOK(){
    int p,l,t;
    cout<<"Masukan Panjang : ";cin>>p;
    cout<<"Masukan Lebar   : ";cin>>l;
    cout<<"Masukan Tinggi  : ";cin>>t;

    int volume = p*l*t;
    cout<<"\nVolume   = "<<volume;
}

main()
{
    volBALOK();
}
