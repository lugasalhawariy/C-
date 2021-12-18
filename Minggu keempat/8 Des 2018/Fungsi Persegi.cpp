#include <iostream>
#include <math.h>
using namespace std;

void rumusPersegi(){
    cout<<"Rumus Persegi"<<endl;
    cout<<"====================\n";

    int s;

    cout<<"Masukan nilai s : ";cin>>s;
    int keliling = 4*s;
    int luas = pow(s, 2);

    cout<<endl;

    cout<<"Keliling Persegi = "<<keliling<<endl;
    cout<<"Luas Persegi     = "<<luas<<endl;
}

main()
{
    rumusPersegi();
}
