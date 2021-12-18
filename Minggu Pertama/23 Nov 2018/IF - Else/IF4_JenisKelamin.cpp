#include <iostream>
using namespace std;

main()
{
    char kelamin;
    cout<<"Jenis Kelamin anda [P/L]: ";cin>>kelamin;

    if(kelamin == 'L'){
        cout<<"\nJenis kelamin anda Laki-laki.";}
    else if(kelamin == 'P'){
        cout<<"\nJenis kelamin anda Perempuan.";}
    else{
        cout<<"\nKode yang anda masukkan salah.";}
}
