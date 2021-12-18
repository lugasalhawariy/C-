#include <iostream>
using namespace std;

main()
{
    int a, b, i, n;
    i = 1;
    n = 10;
    cout<<"TEBAK ANGKA!!"<<endl;
    cout<<"Hasilnya adalah 100. Berapa nilai a dan b?"<<endl;

    while(i < 10){
        cout<<"Masukan a: ";cin>>a;
        cout<<"Masukan b: ";cin>>b;
        if(a == 100 && b == 100)
        {
            cout<<"BENAR !!!";
            break;
        }
        cout<<"Salah! Coba lagi... sisa mencoba "<<n-i<<"x"<<endl<<endl;
        n--;
        if(n == 0){
             cout<<endl<<"Sayang sekali Ferguso. Kau gagal!";
             break;
        }
    }
}
